#include <stdio.h>
int main(){
    int arr[100],n,i,gr=arr[0],sec=0;
    printf("Enter no of elements: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("Enter number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(gr<arr[i]){
        gr = arr[i];
    }
    }
    printf("Greatest: %d\nSecond Greatest: %d\n",gr,sec);
    return 0;
}