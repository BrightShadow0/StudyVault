#include <stdio.h>
int main() {
    int a[100], size, i, max, sec;

    printf("Enter array size: ");
    scanf("%d", &size);

    for (i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    max = a[0];
    sec = a[0];
    
    for (i = 1; i < size; i++) {
        if (a[i] > max) {
            sec = max;
            max = a[i];
        }
        else if (a[i] > sec && a[i] < max) {
            sec = a[i];
        }
    }
    if (sec == max) {
        printf("No second largest distinct element");
    } else {
        printf("Second largest: %d", sec);
    }
    return 0;
}