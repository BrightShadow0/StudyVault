//take 3 positive integers and print greatest (given that && and || not allowed
#include <stdio.h>
int main(){
int a,b,c;
printf("Enter first number: "); 
scanf("%d",&a);
printf("Enter second number: ");
scanf("%d",&b);
printf("Enter third number: ");
scanf("%d",&c);

if(a>b){
    if(c>a)
    printf("%d is greatest",c);
    if(a>c)
    printf("%d is greatest",a);}
if(b>c){
    if(a>b)
    printf("%d is greatest",a);
    if(b>a)
    printf("%d is greatest",b);}
if(c>a){
    if(c>b)
    printf("%d is greatest",c);
    if(c<b)
    printf("%d is greatest",b);}
return 0;
}