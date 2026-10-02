//WAP to print sum of all even digits of given number
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number to find sum of even digits: ");
    scanf("%d",&n);
    int sum = 0; int lastdigit;
    while(n!=0){
    lastdigit = n%10;
    if(lastdigit%2==0)
    sum = sum + lastdigit;
    n = n/10;
    }
printf("Sum of even digits : %d",sum);

    return 0;
}