#include <stdio.h>
int min(int a,int b){
int c = a;
if(b<c)
c = b;
return c;
}
int main(){
    int n1,n2;
    printf("Enter number 1 and 2: ");
    scanf("%d %d",&n1,&n2);
    printf("minimum: %d",min(n1,n2));
}