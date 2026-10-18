//Display AP 4,7,10,13,16,.... till n terms. Take n as user input
#include <stdio.h>
int main(){
int n;
printf("The AP is 4,7,10,13,16,....\n ");
printf("Enter number of terms to print: ");
scanf("%d",&n);
for(int i=4;i<=3*n+1;i=i+3){
    printf("%d, ",i);
}
    return 0;
}