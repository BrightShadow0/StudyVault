#include <stdio.h>
#include <string.h>

struct book{
char name[30];int price,pages;
}book1,book2,book3;

struct legendary{
char rarity;
struct book;
};

int main(){
    strcpy(book1.name,"Nice world");
    book1.price = 100;
    book1.pages = 50;


    strcpy(book2.name,"Good world");
    book2.price = 50;
    book2.pages = 50;
    struct legendary rarity = "S"; 

    strcpy(book3.name,"Bad world");
    book3.price = 200;
    book3.pages = 100;

    return 0;
}