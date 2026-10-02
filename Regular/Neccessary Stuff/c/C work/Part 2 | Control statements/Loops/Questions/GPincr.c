//Display GP 3,12,48,... till n terms. Take n as user input
#include <stdio.h>
int main(){
int n;
printf("The GP is 3,12,48,...\n ");
printf("Enter number of terms to print: ");
scanf("%d",&n);
int a=3;
for(int i=1;i<=n;i++){
    printf("%d, ",a);
    a = a*4;
}
    return 0;
}