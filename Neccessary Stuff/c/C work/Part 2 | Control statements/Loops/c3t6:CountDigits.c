//WAP to count digits of integer input
#include <stdio.h>
int main(){
int n;
printf("\nEnter integer to find no. of digits: ");
scanf("%d",&n);
int count = 0;
while(n!=0){
    n = n/10;
    count++;

}
printf("No. of digits: %d",count);
}