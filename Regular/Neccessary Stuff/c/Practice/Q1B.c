#include <stdio.h>
int main()
{
    int cp,sp;
    printf("Enter cost price: ");
    scanf("%d",&cp);
    printf("Enter selling price: ");
    scanf("%d",&sp);
    if(sp-cp>0)
    {
        printf("Profit");
    }
    else if(sp-cp==0)
    {
        printf("Neither profit nor loss");
    }
    else
    {
        printf("Loss");
    }
    return 0;
}