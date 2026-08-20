#include <stdio.h>
int main(){
int yr;
printf("Enter year: ");
scanf("%d",&yr);
if(yr%4==0)
printf("Leap Year");
else
printf("Not Leap year");
return 0;
}