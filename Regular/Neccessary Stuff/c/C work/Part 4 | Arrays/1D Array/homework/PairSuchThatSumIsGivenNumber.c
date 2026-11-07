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
            if((a[i]+a[j])==num){
                count++;
                printf("(%d,%d) ",a[i],a[j]);
                }
        }
    }
    printf("\ncount: %d\n",count);
    return 0;
}
