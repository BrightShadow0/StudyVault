#include <stdio.h>
int main() {
    int a[51], n, i, key, pos = -3;
    printf("Elements: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", (i + 1));
        scanf("%d", &a[i]);
    }
    printf("Enter Key: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (a[i] == key) {
            pos = i;
            break;
        }
    }
    if (pos != -3) {
        printf("Found at index %d", pos);
    } else {
        printf("Not found");
    }
    return 0;
}