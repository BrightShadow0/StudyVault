//WAP to count digits of user input integer
#include <stdio.h>
int main(){
int n;
printf("\nEnter integer to find no. of digits: ");
scanf("%d",&n);
int count = 0;
while(n!=0){
    n = n/10;
    count = count + 1;
}
printf("%d Digit(s) ",count);
}