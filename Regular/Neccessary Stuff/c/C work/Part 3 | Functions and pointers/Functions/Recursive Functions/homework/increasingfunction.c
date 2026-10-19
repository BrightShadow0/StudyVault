#include <stdio.h>
void incr(int a,int cap){
    if(a>cap) return;
    printf("%d ",a);
    incr(a+1,cap);
    return;
}

int main(){
    int n,x;
    printf("Cap number: ");
    scanf("%d",&n);
    incr(1,n);

    return 0;
}