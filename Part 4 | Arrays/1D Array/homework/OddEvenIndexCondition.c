#include <stdio.h>
int main(){

    int a[8]={1,2,3,4,5,6,7,8},i;

    for(i=0;i<8;i++){

       printf("%d ",a[i]);

        if(i%2==0){
            a[i]+=10;
        }
        else{
            a[i]*=2;
        }
    }
    printf("\n");
    
    for(i=0;i<8;i++){
        printf("%d ",a[i]);
    }

    return 0;
}