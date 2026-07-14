//WAP to calculate sum digits of integer input
#include <stdio.h>
int main(){
int n,ld,sum;
printf("\nEnter integer to find sum of digits: ");
scanf("%d",&n);
sum = 0;
//concept: any number divided by 10 gives last digit as remainder
//143954
while(n!=0){
ld = n%10;
sum = sum + ld;
n = n/10;
}
printf("Sum of digits is %d",sum);
} 