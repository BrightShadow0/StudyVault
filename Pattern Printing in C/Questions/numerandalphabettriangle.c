#include <stdio.h>
int main(){
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);

    for(int i=0;i<=n;i++){
        char a = 'A';
        for(int j=1;j<=i;j++){
            if(i%2==0){
                printf("%c ",a);
                a++;
            }
            else{
                printf("%d ",j);
            }
        }
        printf("\n");
    }
    return 0;
}