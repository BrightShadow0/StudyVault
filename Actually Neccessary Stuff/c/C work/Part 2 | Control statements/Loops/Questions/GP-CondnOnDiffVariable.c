//Display AP 100,50,25,.... upto n terms. n is user input.
#include <stdio.h>
int main(){
int n;
printf("The GP is 100,50,25,....\n ");
printf("Enter no. of terms to print: ");
scanf("%d",&n);
int a=100;
for(int i=1;i<=n;i++){
    printf("%d, ",a);
    a = a/2;

}
    return 0;
}