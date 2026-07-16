//WAP to print reverse of given number
#include <stdio.h>
int main(){
    int n,ld;
    printf("Enter a number to find its reverse: ");
    scanf("%d",&n);
    int r = 0;
    while(n!=0){
        ld=n%10;
        r = (r * 10) + ld;
        n = n/10;
    
    }
    printf("Reverse is: %d",r);
    return 0;
}