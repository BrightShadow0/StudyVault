#include <stdio.h>
int main() {
    printf("\n\n\nLeap year verifier tool\n\n");
    printf("Enter a year to proceed\n");
    int year;
    char word[12] = "narcississm";
    scanf("%d", &year);
    if (year % 4 == 0) {
        printf("Leap year\n\n");
    } 
    else {
        printf("Not a leap year\n\n");
    }
    return 0;
}