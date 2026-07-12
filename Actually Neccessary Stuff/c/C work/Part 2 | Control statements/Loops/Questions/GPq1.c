//Display GP 1,2,4,8,16,32,... till n terms. Take n as user input
#include <stdio.h>
int main(){
int n;
printf("The GP is 1,2,4,8,16,32,...\n ");
printf("Enter number of terms to print: ");
scanf("%d",&n);
int a=1;
for(int i=1;i<=n;i++){
    printf("%d, ",a);
    a = a*2;
}
    return 0;
}