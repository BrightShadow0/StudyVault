#include <stdio.h>
int main() {
    int a[10][10],m,n,i,j;
    printf("Enter as row x column: ");
    scanf("%dx%d",&m,&n);
    for (i = 0; i < m; i++){
        for(j=0;j<n;j++){
            printf("Element: "); scanf("%d",&a[i][j]);
        }
    }
    for (i = 0; i < m; i++){
        for(j=0;j<n;j++){
            printf("%d  ",a[i][j]);
        }
    printf("\n");
    }
    return 0;
}