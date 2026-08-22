#include <stdio.h>
int main(){
int t1=0,t2=1,t3,i=1,n;
printf("Enter number of terms of Fibonacci series required: ");
scanf("%d",&n);
printf("%d",t1);
while(i<n){
t3 = t1 + t2;
t1 = t2;
t2 = t3;
printf(", %d",t2);
i++;}
return 0;
}