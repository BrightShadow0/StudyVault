#include <stdio.h>
int swap(int x, int y){
    int temp = x;
    x = y;
    y = temp;
    return 0;
}

int main(){
    int a,b;
    printf("Enter a,b: ");
    scanf("%d,%d",&a,&b);
    printf("Before swap, a = %d, b = %d\n",a,b);
    swap(a,b);
    printf("After swap: a = %d, b = %d",a,b);
    return 0;
}