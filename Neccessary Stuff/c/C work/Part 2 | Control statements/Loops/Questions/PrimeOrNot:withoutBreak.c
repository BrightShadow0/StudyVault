//WAP To check if entered number is prime or not
#include <stdio.h>
int main(){
int n;
printf("Enter a number to check its primality: ");
scanf("%d",&n);
for(int i=2;i<n;i++){
    if(n%i==0){
    printf("Is Composite");
break;}
    else{
    printf("Is Prime");
break;}
}
return 0;
}