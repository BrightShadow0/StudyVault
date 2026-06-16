#include <stdio.h>
int main(){
printf("\nBasic operator Calculator\n");
printf("(Just enter two numbers, up to 6 decimals accuracy)\n\n");
float a,b; //double is better for arithmetic calculation due to accuracy for 15 to 16 digits while float just has 6 or 7 digits
    printf("Enter first number(a): ");
    scanf("%lf",&a);
    printf("Enter second number(b): ");
    scanf("%lf",&b);
    printf("Required Values are as follows:\n");
    printf("a + b = %lf\n",a+b);
    printf("a * b = %lf\n",a*b);
    printf("a - b = %lf\n",a-b);
    printf("b - a = %lf\n",b-a);
    printf("a / b = %lf\n",a/b);
    printf("b / a = %lf\n",b/a);
    return 0;
}