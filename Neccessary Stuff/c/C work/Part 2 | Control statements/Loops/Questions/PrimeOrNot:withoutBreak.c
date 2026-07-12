//WAP To check if entered number is prime or not
#include <stdio.h>
int main(){
int n;
printf("Enter a number to check its primality: ");
scanf("%d",&n);
int a = 0;
for(int i=2;i<=n-1;i++){
    if(n%i==0){
    a = 1;
    break;}}
if(a==0) printf("Given number is prime\n");
else printf("Given number is composite\n");
return 0;
}