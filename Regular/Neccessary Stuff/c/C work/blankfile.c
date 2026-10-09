#include <stdio.h>
long factorial(int fac) {
    if (fac == 0 || fac == 1)
        return 1;
    else
        return fac * factorial(fac - 1);
}
int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("%ld", factorial(n));
    return 0;
}