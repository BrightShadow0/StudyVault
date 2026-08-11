#include <stdio.h>
int main(){
   int num;
    printf("Enter a number to check divisibility with 3 and 5: ");
    scanf("%d",&num);
    
    if(num%3==0){
        if(num%5==0)
        printf("Divisible by both 3 and 5");
        else
        printf("Divisible by 3, not 5");
    }
    else{
        if(num%5==0)
        printf("Divisible by 5, not 3");
        else
        printf("Neither divisible by 3 nor 5");
    }

return 0;
}