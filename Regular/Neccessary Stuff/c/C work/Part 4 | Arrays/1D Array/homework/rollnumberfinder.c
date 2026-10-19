#include <stdio.h>
int main() {
    
    int size=10, arr[size], i;
    printf("Enter 10 marks separated by spaces:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\nRoll numbers with less than 35 marks: ");
    for(i = 0; i < 10; i++) {
        if(arr[i] < 35) {
            printf("%d ", i); 
        }
    }
    printf("\n");
    return 0;
}
