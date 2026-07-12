//Display AP 1,3,5,7,9,.... till n terms. Take n as user input
#include <stdio.h>
int main(){
int n;
printf("The AP is 1,3,5,7,9,....\n ");
printf("Enter number of terms to print: ");
scanf("%d",&n);
for(int i=1;i<=(2*n);i=i+2){
if(i%2!=0){
printf("%d\n",i);}
}
    return 0;
}