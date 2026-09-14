#include <stdio.h>
int main() {
    int a[50], n, i, first, second;
    printf("Elements: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", (i + 1));
        scanf("%d", &a[i]);
    }
    first = a[0];
    second = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] > first) {
            second = first;
            first = a[i];
        }
        else if (a[i] > second && a[i] != first) {
            second = a[i];
        }
    }
    printf("Second largest = %d", second);
    return 0;
}