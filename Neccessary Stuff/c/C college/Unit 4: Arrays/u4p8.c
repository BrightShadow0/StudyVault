#include <stdio.h>
int main(){
 int a[50], b[50], merged[100], n1, n2, i;
printf("Elements of A: ");
scanf("%d", &n1);
    for(i=0; i<n1; i++){
        printf("Element %d: ", (i+1));
        scanf("%d", &a[i]);
    }
printf("Elements of B: ");
scanf("%d", &n2);
    for(i=0; i<n2; i++){
        printf("Element %d: ", (i+1));
        scanf("%d", &b[i]);
    }
    for(i=0; i<n1; i++){
        merged[i] = a[i];
    }
    for(i=0; i<n2; i++){
        merged[n1+i] = b[i];
    }
printf("Merged array: ");
    for(i=0; i<(n1+n2); i++){
        printf("%d ", merged[i]);
    }
    return 0;
}