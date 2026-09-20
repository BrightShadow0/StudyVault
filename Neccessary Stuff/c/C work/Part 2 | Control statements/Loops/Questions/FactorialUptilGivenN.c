#include <stdio.h>
int main()
{
    int n,fac,i,j;
    printf("Enter number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fac=1;
        for(j=1;j<=i;j++)
        {
            fac *= j;
        }
        printf("%d! = %d",i,fac);
        printf("\n");
    }
    return 0;   
}