//WAP to calculate sum digits of integer input
#include <stdio.h>
int main(){
int n,a,b;
printf("\nEnter integer to find sum of digits: ");
scanf("%d",&n);
//concept: any number divided by 10 gives last digit as remainder
while(n!=0){
a=n%10;
b=n/10;
}
printf("%d",a);
} 