#include <stdio.h>
int func(int a){
    if(a==1)
    return 1;
    printf("%d ",a);
    return func(a-1);
}

int main(){
    int num;
    printf("Enter: ");
    scanf("%d",&num);
    printf("%d",func(num));
    return 0;
}