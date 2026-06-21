#include <stdio.h>
int main(){
    double a,b,c,d,e,f,g,h,i;
    printf("\n3x3 Determinant Calculator\n\n");
    printf("Enter Row 1: ");
    scanf("%lf %lf %lf",&a,&b,&c);
    printf("Enter Row 2: ");
    scanf("%lf %lf %lf",&d,&e,&f);    
    printf("Enter Row 1: ");
    scanf("%lf %lf %lf",&g,&h,&i);
    double part1,part2,part3,det;
    part1 = a * (e*i - h*f);
    part2 = b * (d*i - g*f);
    part3 = c * (d*h - g*e);
    det = part1 - part2 + part3;
    printf("\nDeterminant is: %lf",det);
};