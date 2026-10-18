#include <stdio.h>
int main(){
    int arr[5],size,sum=0;
    printf("Enter array size: ");
    scanf("%d",&size);

    for(int i=0;i<size;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }
    printf("Sum of elements: %d",sum);

    return 0;
}