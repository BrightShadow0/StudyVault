#include <stdio.h>
int main(){
int a[50],b[50],n,i;
printf("Enter number of elements: ");
scanf("%d",&n);
printf("Input Array\n");
for(i=0;i<n;i++){
    printf("Enter element %d: ",(i+1));
    scanf("%d",&a[i]);}
printf("Output Array\n");
for(i=0;i<n;i++){
    b[i]=a[i];
    printf("%d ",b[i]);}
return 0;
} 