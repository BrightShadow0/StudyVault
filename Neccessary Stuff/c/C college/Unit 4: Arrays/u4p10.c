#include <stdio.h>
int main(){
int a[50],n,i,value,count=0;
printf("Enter number of elements: ");
scanf("%d",&n);
for(i=0;i<n;i++){
    printf("Enter element %d: ",(i+1));
    scanf("%d",&a[i]);}
printf("Find frequency of "); scanf("%d",&value);
for(i=0;i<n;i++){
    if(a[i]==value)
{
    count++;
}
}
printf("Frequency of %d is %d",value,count);
return 0;
} 