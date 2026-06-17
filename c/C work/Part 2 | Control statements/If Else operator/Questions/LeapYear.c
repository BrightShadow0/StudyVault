#include <stdio.h>
int main(){
printf("\nLeap year verifier tool\n\n");
printf("Enter a year to proceed\n");
int year;
scanf("%d",&year);
    if(year%4==0){
        printf("Leap year");
    }
    else{printf("Not a leap year");
    }
return 0;
}