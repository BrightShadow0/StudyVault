#include <stdio.h>
int main(){
    int n;
    printf("Enter rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        char a='A';
        for(int j=n;j>=i;j--){
            printf("%c ",a++);
        }
        printf("\n");
    }
    return 0;
}