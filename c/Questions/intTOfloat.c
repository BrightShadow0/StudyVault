//Take integer as input and print half the number
#include <stdio.h>
int main(){
    int integer;
    printf("Enter integer value: ");
    scanf("%d",&integer);
    float decimal = integer/2;
    printf("Half of given value is: %f\n",decimal);
}