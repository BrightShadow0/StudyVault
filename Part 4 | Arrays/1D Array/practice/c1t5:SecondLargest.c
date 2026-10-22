#include <stdio.h>
int main() {
    
    int arr[200],size,i,max=0,sec=0;
    printf("Enter array size: ");
    scanf("%d",&size);

    for(i = 0; i < size; i++) {
        printf("Element %d: ",i+1);
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < size; i++) {
        if(arr[i] > max) {
            sec = max;
            max = arr[i];
        }
        else if(arr[i] > sec && arr[i] < max){
            sec = arr[i];
        }
    }

    printf("\nLargest: %d",max);
    printf("\nSecond largest: %d",sec);

    return 0;
}