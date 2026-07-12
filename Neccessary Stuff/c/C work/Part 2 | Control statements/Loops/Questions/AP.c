//Display AP 1,3,5,7,9,.... till n terms. Take n as user input
#include <stdio.h>
int main(){
int n;
printf("The AP is 1,3,5,7,9,....\n ");
printf("Enter number of terms to print: ");
scanf("%d",&n);
for(int i=1;i<=(2*n-1);i=i+2){
printf("%d, ",i);}

    return 0;
}