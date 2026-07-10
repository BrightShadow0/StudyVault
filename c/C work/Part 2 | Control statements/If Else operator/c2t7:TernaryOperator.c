#include <stdio.h>
int main(){
int n;
printf("Find if non zero integer is odd or even: ");
scanf("%d",&n);
n%2==0 ? printf("Even") : printf("Odd");
//(condition) ? (if true then do task1) : (if false then do task2) ;
return 0;
}