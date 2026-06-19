//Take positive integer input and determine if number is divisible by 5 or 3 but not 15

#include <stdio.h>
int main(){
int n;
printf("Enter value: ");
scanf("%d",&n);
    if((n%3==0 || n%5==0) && n%15!=0){
        printf("Value is divisible by 5 or 3 but not 15");
    }
    else{
        printf("Doesn't meet conditions\n (divisible by 3,5 and not 15)");
    }
}