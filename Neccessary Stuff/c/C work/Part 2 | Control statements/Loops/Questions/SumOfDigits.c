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
ld = n%10; //(1) 4 ; (2) 5
sum = sum + ld; //(1) 0 + 4 = 4; (2) 4 + 5 = 9;
n = n/10; //(1) from 143954 to 14395 then loop;
}

} 