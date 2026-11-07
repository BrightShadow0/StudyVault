#include <stdio.h>
int main(){
int a[10]={1,2,3,4,5,6,7,8,9,10},num,count=0;
printf("Enter number: ");
scanf("%d",&num);
for(int i=0;i<10;i++){
    if(a[i]>num){
        count++;
    }
}
printf("Count = %d ",count);
    return 0;
}