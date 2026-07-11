//take 3 positive integers and print greatest

#include <stdio.h>
int main(){
int a,b,c;
printf("\nGreatest of 3 finder\n\n");

printf("Enter first number: ");
scanf("%d",&a);
printf("Enter second number: ");
scanf("%d",&b);
printf("Enter third number: ");

if(a>b&&a>c){
    printf("%d is greatest\n",a);
}
if(b>a&&b>c){
    printf("%d is greatest\n",b);
}
if(c>a&&c>b){
    printf("%d is greatest\n",c);
}
    return 0;
}