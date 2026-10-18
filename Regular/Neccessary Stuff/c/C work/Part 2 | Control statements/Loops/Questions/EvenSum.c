#include <stdio.h>
int main()
{
    int a,sum=0,i,temp;
    printf("Enter number: ");
    scanf("%d",&a);
    while(a!=0)
    {
        temp = a%10;
        if(temp%2==0)
        {
            sum+=temp;
        }
        a = a/10;
    }
    printf("Sum of even digits is: %d",sum);

    return 0;
}