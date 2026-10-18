#include <stdio.h>
int main(){
    int n,finder=0;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    finder = ((n/2)+1);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==finder || j==finder)
            {
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}