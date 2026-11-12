#include <stdio.h>
#include <math.h>

int main(){
    int n,a;
    printf("Enter number (n): ");
    scanf("%d",&n);
    printf("Enter number for index (a): ");
    scanf("%d",&a);

    int sqr = sqrt(n);
    printf("Square root of n: %d\n",sqr);
    int power = pow(n,a);
    printf("%d raised to %d: %d\n",n,a,power);

    return 0;
}