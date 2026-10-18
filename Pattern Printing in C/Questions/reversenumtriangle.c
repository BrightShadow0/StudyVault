#include <stdio.h>
int main(){
    int n,count;
    printf("Enter rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        count=1;
        for(int j=n;j>=i;j--){
            printf("%d ",count);
            count++;
        }
        printf("\n");
    }
    return 0;
}