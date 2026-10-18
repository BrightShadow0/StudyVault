#include <stdio.h>
int main() {
    
    int arr[200],size,i;
    printf("Enter array size: ");
    scanf("%d",&size);

    for(i = 0; i < size; i++) {
        printf("Element %d: ",i+1);
        scanf("%d", &arr[i]);
    }

    return 0;
}