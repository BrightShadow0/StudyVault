#include <stdio.h>
int sum(int x,int y){
    return x+y;
}
int main(){
    int n1,n2;
    printf("Enter number 1: ");
    scanf("%d",&n1);
    printf("Enter number 2: ");
    scanf("%d",&n2);
    printf("Sum: %d",sum(n1,n2));
}