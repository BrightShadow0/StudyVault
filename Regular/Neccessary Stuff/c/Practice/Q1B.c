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
        printf("Profit of %d",sp-cp);
    }
    else if(sp-cp==0)
    {
        printf("Neither profit nor loss");
    }
    else
    {
        printf("Loss of %d",cp-sp);
    }
    return 0;
}