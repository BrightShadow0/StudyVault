#include <stdio.h>
int main(){
    printf("Simple Interest calculator\n\n");
    float p,r,t,si;
    printf("Enter principal amount: ");
    scanf("%f",&p);
     printf("Enter pcpa (rate): ");
    scanf("%f",&r);
    printf("Enter duration (in years): ");
    scanf("%f",&t);
    si=p*r*t/100;
printf("Simple interest for data is: %f Rupees\n",si);
}