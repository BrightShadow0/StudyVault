//Take float input and print fractional part of real number

#include <stdio.h>
int main(){
float x;
scanf("%f",&x);
int y = x;
printf("Fractional part is: %f",x-y);
}