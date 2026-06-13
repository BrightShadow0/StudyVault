#include <stdio.h>
int main(){
printf("\nBasic operator Calculator\n");
printf("(Just enter two numbers, up to 6 decimals accuracy)\n\n");
float a,b;
    printf("Enter first number(a): ");
    scanf("%f",&a);
    printf("Enter second number(b): ");
    scanf("%f",&b);
    printf("Required Values are as follows:\n");
    printf("a + b = %f\n",a+b);
    printf("a * b = %f\n",a*b);
    printf("a - b = %f\n",a-b);
    printf("b - a = %f\n",b-a);
    printf("a / b = %f\n",a/b);
    printf("b / a = %f\n",b/a);
    return 0;
}