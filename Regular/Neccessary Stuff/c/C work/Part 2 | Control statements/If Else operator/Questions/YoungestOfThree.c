//If ages of Ram, Shyam and Ajay are input, write program to find youngest of the three

#include <stdio.h>
int main(){
int a,b,c;
printf("Youngest of Ram, Shyam and Ajay\n\n");

printf("Enter Ram's age: ");
scanf("%d",&a);
printf("Enter Shyam's age: ");
scanf("%d",&b);
printf("Enter Ajay's age: ");
scanf("%d",&c);

if(a<b&&a<c){
    printf("\nRam is youngest of the three\n");
}
if(b<a&&b<c){
    printf("\nShyam is youngest of the three\n");
}
if(c<a&&c<b){
    printf("\nAjay is youngest of the three\n");
}
    return 0;
}