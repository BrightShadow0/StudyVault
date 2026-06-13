//Take two integers input a and b (a>b) and find remainder when a is divided by b

#include <stdio.h>
int main(){
int a,b;
printf("Enter values of a and b (a>b) : ");
scanf("%d %d",&a,&b);
printf("a is %d, b is %d\n",a,b);
printf("Quotient of division (a/b) is: %d\n",a/b);
printf("Remainder of division (a/b) is: %d\n",a%b);
}