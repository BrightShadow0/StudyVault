#include <stdio.h>
void display(int start, int end, int choice)
{
    if(start>end)
    {
        return;
    }
    if(start%2==choice)
    {
        printf("%d ",start);
    }
    display(start+1,end,choice);
}
int main()
{
    int a,b,flip;
    printf("Enter range: ");
    scanf("%d %d",&a,&b);
    printf("Enter 0 for even, 1 for odd: ");
    scanf("%d",&flip);
    if(a>b||(flip!=0&&flip!=1))
    {
        printf("Invalid input");
    }
    display(a,b,flip);
    return 0;
}