//WAP to calculate sum digits of integer and also print its reverse
#include <stdio.h>
int main(){
int n,ld,sum,r;
printf("\nEnter integer to find sum and reverse of digits: ");
scanf("%d",&n);
sum = 0;
while(n!=0){
ld = n%10;
printf("%d",ld);
sum = sum + ld;
n = n/10;
}
printf("\nSum is %d",sum);
} 