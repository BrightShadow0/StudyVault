//Take positive integer input and determine if number is divisible by 5 or 3 but not 15

#include <stdio.h>
int main(){
int n;
printf("Enter integer: ");
scanf("%d",&n);
if(n%5==0||n%3==0){
    if(n%15!=0){
        printf("number is divisible by 5 or 3, but not 15");
    }
    else{
        printf("number is divisible by 5, 3, 15");
    }
}
else{
    printf("Not divisible by 5, 3, 15");
}
    return 0;
}