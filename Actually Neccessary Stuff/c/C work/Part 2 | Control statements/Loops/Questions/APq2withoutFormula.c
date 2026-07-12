//Display AP 4,7,10,13,16,.... till n terms without using formula. Take n as user input
#include <stdio.h>
int main(){
int n;
printf("The AP is 4,7,10,13,16,....\n ");
printf("Enter number of terms to print: ");
scanf("%d",&n);
int a = 4;
for(int i=1;i<=n;i++){
printf("%d,",a); 
a=a+3;
}
    return 0;
}