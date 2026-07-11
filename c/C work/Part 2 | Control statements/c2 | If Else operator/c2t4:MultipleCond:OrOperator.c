#include <stdio.h>
int main() {
    int score, bonus;
    printf("Enter score: ");
scanf("%d",&score);
printf("Enter bonus status (1 for accepted, 0 for declined): ");
scanf("%d",&bonus);
    if (score >= 90 || bonus == 1) {
        printf("\nYou get a reward.\n");
    }
    return 0;
}