//WAP to print reverse of given number
#include <stdio.h>
int main(){
    int n,lastdigit;
    printf("Enter a number to find its reverse: ");
    scanf("%d",&n);
    while(n!=0){
lastdigit = n%10;
printf("%d',lastdigit");
n = n/10;
}
    return 0;
}