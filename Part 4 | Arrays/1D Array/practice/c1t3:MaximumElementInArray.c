#include <stdio.h>
int main() {
    
    int arr[200],size,i,max=0;
    printf("Enter array size: ");
    scanf("%d",&size);

    for(i = 0; i < size; i++) {
        printf("Element %d: ",i+1);
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i]; 
        }
    }

    printf("Maximum: %d",max);

    return 0;
}