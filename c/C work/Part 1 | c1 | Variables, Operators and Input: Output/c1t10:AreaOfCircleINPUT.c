#include <stdio.h>
int main(){
float radius;
printf("Enter value of radius: ");
scanf("%f",&radius);
float pi = 3.14159265358979;
float area = pi*radius*radius;
printf("The area of circle is: %f square units\n",area);
}