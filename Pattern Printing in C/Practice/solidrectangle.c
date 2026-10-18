#include <stdio.h>
int main(){
    int n,m;
    printf("Enter number of rows: ");
    scanf("%d",&m);
    printf("Enter number of columns: ");
    scanf("%d",&n);
    for(int i=1;i<=m;i++){
        for (int j=1;j<=n;j++){
            printf("* ");        
        }
        printf("\n");
    }
return 0;
}