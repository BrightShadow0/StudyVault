#include <stdio.h>
int main(){
    int n; char a='A';
    printf("Enter rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        a='A';
        for(int j=1;j<=i;j++){
            printf("%c ",a++);
        }
        printf("\n");
    }
    return 0;
}