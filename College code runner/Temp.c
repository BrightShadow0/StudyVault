#include <stdio.h>
int main() {
    int num, count = 0;
    int max, min;
    char choice;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (count == 0) {
            max = num;
            min = num;
        } else {
            if (num > max) max = num;
            if (num < min) min = num;
        }
        count++;

        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("\nLargest number entered: %d\n", max);
    printf("Smallest number entered: %d\n", min);

    return 0;
}