#include <stdio.h>
int main(){
    int arr[5],size,prod=1;
    printf("Enter array size: ");
    scanf("%d",&size);

    for(int i=0;i<size;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        prod = prod * arr[i];
    }
    printf("product of elements: %d",prod);

    return 0;
}