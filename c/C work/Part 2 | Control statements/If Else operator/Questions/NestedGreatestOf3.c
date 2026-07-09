//take 3 positive integers and print greatest (given that && and || not allowed
#include <stdio.h>
int main(){
int a,b,c;
printf("\nGreatest of 3 finder\n\n");
//Entries and inputs now
printf("Enter first number: ");
scanf("%d",&a);
printf("Enter second number: ");
scanf("%d",&b);
printf("Enter third number: ");
scanf("%d",&c);

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

    return 0; //idk yet
}