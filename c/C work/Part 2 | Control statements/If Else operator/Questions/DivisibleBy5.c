//Take positive integer input and tell if divisible by 5 or not

#include <stdio.h>
int main(){
printf("Enter a number: ");
int num;
scanf("%d",&num);
    if(num%5==0){
    printf("Divisible by 5");
    }
    else{printf("Not divisible by 5");
    }
return 0;
}