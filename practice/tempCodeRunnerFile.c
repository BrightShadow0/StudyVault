#include <stdio.h>
int main()
{
    int a,b,op;
    printf("Simple calculator \n\n");
    printf("Enter two numbers and operation (eg. 2 + 3): ");
    scanf("%d%c%d",&a,&op,&b);
    switch(op)
    {
        case '+': printf("%d",a+b); break;
        case '-': printf("%d",a-b); break;
        case 'x': printf("%d",a*b); break;
        case '*': printf("%d",a*b); break;
        case '/': printf("%d",a/b); break;
        default: printf("Invalid input");
    }
    return 0;
}