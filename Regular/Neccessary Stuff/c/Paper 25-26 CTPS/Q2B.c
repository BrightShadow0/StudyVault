#include <stdio.h>

int main()
{
    float tem;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &tem);

    if(tem >= 40)
        printf("Very Hot");
    else if(tem >= 30)
        printf("Hot");
    else if(tem >= 20)
        printf("Warm");
    else if(tem >= 10)
        printf("Cool");
    else
        printf("Cold");

    return 0;
}