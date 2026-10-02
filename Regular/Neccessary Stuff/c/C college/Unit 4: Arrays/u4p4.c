#include <stdio.h>
int main(){
int a[50],b[50],n,i,sum=0; float avg;
printf("Enter number of elements: ");
scanf("%d",&n);
printf("Input Array\n");
for(i=0;i<n;i++){
    printf("Enter element %d: ",(i+1));
    scanf("%d",&a[i]);}
for(i=0;i<n;i++){
    sum = sum + a[i];}
avg = sum/n;
printf("Sum: %d\nAverage: %f",sum,avg);
} 