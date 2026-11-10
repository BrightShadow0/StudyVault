#include <stdio.h>
int main()
{
    double cel,fah;
    printf("Enter Temperature in Celcius: ");
    scanf("%lf",&cel);
    fah = (9*cel)/5 + 32;
    printf("Temperature in Fahrenheit: %f",fah);
return 0;
}