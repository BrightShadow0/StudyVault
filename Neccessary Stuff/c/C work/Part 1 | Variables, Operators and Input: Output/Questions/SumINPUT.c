#include <stdio.h>
int main(){
printf("\nBasic Sum Calculator\n\n");
float a,b; //double is better for arithmetic calculation due to accuracy for 15 to 16 digits while float just has 6 or 7 digits
    printf("Enter first number(a): ");
    scanf("%f",&a);
    printf("Enter second number(b): ");
    scanf("%f",&b);
    printf("Sum is: ");
    printf("a + b = %f\n",a+b);
    return 0;
}