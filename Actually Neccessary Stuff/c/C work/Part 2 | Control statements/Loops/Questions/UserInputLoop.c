//Take user input to print "Hello" n times
#include <stdio.h>
int main(){
int n;
printf("Enter number of times ''Hello'' must be printed: ");
scanf("%d",&n);
for(int i=1;i<=n;i++){ //will print n "Hello"
    printf("Hello\n");}
return 0;
}