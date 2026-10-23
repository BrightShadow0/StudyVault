#include <stdio.h>
int main(){

    int a[100],size,i,j,k,num,count=0;
    
    printf("Enter array size: ");
    scanf("%d",&size);
    
    for(int b=0;b<size;b++){
        printf("Enter element %d: ",b+1);
        scanf("%d",&a[b]);
    }

    printf("Enter number: ");
    scanf("%d",&num);

    for(i=0;i<size;i++){
        for(j=0;j<i;j++){
            for(k=0;k<j;k++){
            if((a[i]+a[j]+a[k])==num){
                count++;
                printf("(%d,%d,%d) ",a[i],a[j],a[k]);
                }   
            }

        }
    }
    printf("count: %d",count);
    return 0;
}