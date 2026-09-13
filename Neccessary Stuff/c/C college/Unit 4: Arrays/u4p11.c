 #include <stdio.h>
int main(){
int a[50],b[50],n,i;
printf("Elements: ");
scanf("%d",&n);
for(i=0;i<n;i++){
    printf("Element %d: ",(i+1));
    scanf("%d",&a[i]);}
printf("Reverse Array: ");
    for(i=n-1;i>=0;i--){
    printf("%d ",a[i]);} 
return 0;
}