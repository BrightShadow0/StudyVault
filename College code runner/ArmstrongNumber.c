#include <stdio.h>
#include <math.h>

int main(){
    int num, orig, ld, armstrong = 0;
    
    printf("Enter number to check if it is Armstrong number: ");
    scanf("%d", &num);
    
    orig = num;  // keep original to compare later
    
    while(num != 0){
        ld = num % 10;
        num /= 10;
        printf("%lf ",pow(ld,3));
        armstrong += pow(ld, 3);  // accumulate sum
    }
    
    if(armstrong == orig)
        printf("%d is an Armstrong number\n", orig);
    else
        printf("%d is not an Armstrong number\n", orig);
    
    return 0;
}