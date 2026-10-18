#include <stdio.h>
int main(){
    int n,i,j,num;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    printf("Enter number of stars: ");
    scanf("%d",&num);
    for(int i=1;i<=n;i++){
        for (j=1;j<=num;j++){
            printf("* ");        
        }
        printf("\n");
    }
return 0;
}