#include <stdio.h>
int main()
{
    double ht,wt,BMI;
    printf("Enter weight in kilograms: ");
    scanf("%lf",&wt);
    printf("Enter height in metres: ");
    scanf("%lf",&ht);
    BMI = wt / (ht*ht);
    printf("BMI Value: %f",BMI);
    return 0;
}