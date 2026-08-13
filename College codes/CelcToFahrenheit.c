#include <stdio.h>
int main(){
float cel,fah;
printf("Enter Temperature (in °C): ");
scanf("%f",&cel);
fah = (cel*1.8)+32;
printf("Temperature in Fahrenheit is: %f°F ",fah);
    return 0;
}