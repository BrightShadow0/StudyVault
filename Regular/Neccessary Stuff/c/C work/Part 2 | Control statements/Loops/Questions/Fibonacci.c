#include <stdio.h>
int main(){
    int a=1,b=1,temp,n;
    printf("Enter number of terms required: ");
    scanf("%d",&n);
    printf("%d %d ",a,b);
    for(int i=1;i<=n;i++){
    temp = a + b;
    a = b;
    b = temp;
        printf("%d ",temp);
    }
    return 0;
}