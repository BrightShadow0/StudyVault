from dotenv import load_dotenv

from langchain_core.documents import Document
from langchain_core.prompts import ChatPromptTemplate
from langchain_core.output_parsers import StrOutputParser
from langchain_core.runnables import (
    RunnablePassthrough,
    RunnableParallel,
)
from langchain_text_splitters import RecursiveCharacterTextSplitter
from langchain_huggingface import HuggingFaceEmbeddings
from langchain_openai import ChatOpenAI
from langchain_chroma import Chroma
from openai import OpenAI
import os

load_dotenv()

api_key = os.getenv("OPENROUTER_API_KEY")
openai_api_key = os.getenv("OPENAI_API_KEY")

documents = [
    Document(page_content="""
    LangChain is a framework for building applications
    powered by large language models.
    It supports document retrieval and RAG pipelines.
    """),
    Document(page_content="""
    RAG stands for Retrieval-Augmented Generation.
    It retrieves relevant information from a knowledge
    base and provides that information to an LLM.
    """),
    Document(page_content="""
    ChromaDB is a vector database that stores embeddings
    and enables similarity search over documents.
    """)
]

sp = RecursiveCharacterTextSplitter(
    chunk_size=200,
    chunk_overlap=30
)

chunks = sp.split_documents(documents)

embeddings = HuggingFaceEmbeddings(
    model_name="sentence-transformers/all-MiniLM-L6-v2"
)

vectorstore = Chroma.from_documents(
    documents=chunks,
    embedding=embeddings
)

retriever = vectorstore.as_retriever(
    search_kwargs={"k": 2}
)

prompt = ChatPromptTemplate.from_template("""
Answer the question using only the context below.
If the answer is not in the context, say you don't know.

Context:
{context}

Question:
{question}

Answer:
""")

client = OpenAI(
    base_url="https://openrouter.ai/api/v1",
    api_key=api_key
)

llm = ChatOpenAI(
    base_url="https://openrouter.ai/api/v1",
    api_key=api_key,
    model="nvidia/nemotron-3-super-120b-a12b:free"
)

def format_docs(docs):
    return "\n\n".join(
        doc.page_content for doc in docs
    )

rag_chain = (
    RunnableParallel({
        "context": retriever | format_docs,
        "question": RunnablePassthrough()
    })
    | prompt
    | llm
    | StrOutputParser()
)

question = "What is RAG and how does it work?"

answer = rag_chain.invoke(question)

print("Question:", question)
print("Answer:", answer)
