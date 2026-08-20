#include <stdio.h>
int main(){
double price;
printf("Enter price of item: ");
scanf("%lf",&price);
price = price + (price * 5)/100;
printf("Price of item after taxation (5%): %lf",price);
return 0;
}