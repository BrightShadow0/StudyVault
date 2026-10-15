#include <stdio.h>
int sumDigits(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int reverseNum(int n) {
    int rev = 0;
    while (n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}
int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("Sum of digits = %d\n", sumDigits(n));
    printf("Reverse = %d\n", reverseNum(n));
    return 0;
}