
#include <stdio.h>

void display(int start, int end, int choice) {
    if (start > end)
        return;

    if (start % 2 == choice)
        printf("%d ", start);

    display(start + 1, end, choice);
}

int main() {
    int start, end, choice;

    printf("Enter the range: ");
    scanf("%d %d", &start, &end);

    printf("Enter 0 for even or 1 for odd: ");
    scanf("%d", &choice);

    if (start > end || (choice != 0 && choice != 1)) {
        printf("Invalid input");
        return 0;
    }

    display(start, end, choice);

    return 0;
}
