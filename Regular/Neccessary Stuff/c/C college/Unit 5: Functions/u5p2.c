#include <stdio.h>
void showTable(int x,int n){
    for(int i=1;i<=n;i++){
    printf("%dx%d = %d\n",x,i,(x*i));}
}
int main(){
    int a,z;
    printf("Table of number: ");
    scanf("%d",&a);
    printf("Till what factor: ");
    scanf("%d",&z);
    showTable(a,z);
}
