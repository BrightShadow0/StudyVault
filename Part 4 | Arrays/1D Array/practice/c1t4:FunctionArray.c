#include <stdio.h>

void swap(int b[]){
    int temp;
    temp = b[1];
    b[1] = b[0];
    b[0] = temp;
}

int main() {
    
    int arr[2] = {19,547};
    printf("%d\n",arr[0]);
    swap(arr);
    for(int i=0;i<2;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}