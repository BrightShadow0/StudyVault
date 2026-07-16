//WAP to calculate sum digits of integer and also print its reverse
#include <stdio.h>
int main(){
    int n,ld;
    printf("\nEnter a number to find its reverse: ");
    scanf("%d",&n);
    int a = n;
    int r = 0;
    while(n!=0){
        ld=n%10;
        r = (r * 10) + ld;
        n = n/10;
    
    }
    printf("Reverse is: %d\n",r);
    printf("Sum of reverse and original is: %d\n",r+a);

    return 0;
}