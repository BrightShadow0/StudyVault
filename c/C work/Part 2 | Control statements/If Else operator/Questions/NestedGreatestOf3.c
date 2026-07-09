//take 3 positive integers and print greatest (given that && and || not allowed
#include <stdio.h>
int main(){
int a,b,c;
//Entries and inputs now
printf("Enter first number: "); 
scanf("%d",&a); //entries
printf("Enter second number: ");
scanf("%d",&b); //entries
printf("Enter third number: ");
scanf("%d",&c); //entries

if(a>b){ //main condition 1
    if(c>a)
    printf("%d is greatest",c);
    if(a>c)
    printf("%d is greatest",a);}
if(b>c){ //main condition 2
    if(a>b)
    printf("%d is greatest",a);
    if(b>a)
    printf("%d is greatest",b);}
if(c>a){ //main condition 3
    if(c>b)
    printf("%d is greatest",c);
    if(c<b)
    printf("%d is greatest",b);}

    return 0;
}