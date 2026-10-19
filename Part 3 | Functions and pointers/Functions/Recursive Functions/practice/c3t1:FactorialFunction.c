#include <stdio.h>
int fac(int a){
    if(a == 0)
        return 1;
    return a * fac(a-1);
}
int main(){
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    printf("Factorial: %d\n",fac(num));
    return 0;
}