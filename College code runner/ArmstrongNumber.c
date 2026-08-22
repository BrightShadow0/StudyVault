//Armstrong number definition is: sum of each digit raised to the power of n,
//where n is the total number of digits in the number, and that sum should equal
//the number itself.

#include <stdio.h>
#include <math.h>
int main(){
    int num, orig, ld, digit = 0, armstrong = 0;
    printf("Enter number to check if it is Armstrong number: ");
    scanf("%d", &num);
    orig = num;
        int temp = num;
    while(temp != 0){
        digit++;
        temp /= 10;
    }
    while(num != 0){
        ld = num % 10;
        num /= 10;
        armstrong += pow(ld, digit);
    } 
    if(armstrong == orig)
        printf("%d is an Armstrong number\n", orig);
    else
        printf("%d is not an Armstrong number\n", orig);
    return 0;
}