#include <stdio.h>
int main() {
int a[10][10], m, n, scalar, i, j;
printf("Enter rows and columns: ");
scanf("%dx%d", &m, &n);
printf("Enter matrix elements:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter scalar value: ");
    scanf("%d", &scalar);
    printf("Resultant Matrix:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("%d  ", a[i][j] * scalar);
        }
        printf("\n");
    }
    return 0;
}