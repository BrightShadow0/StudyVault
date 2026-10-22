#include <stdio.h>
int main(){
int a[10]={1,2,3,4,5,6,7,8,9,10},i,OddSum=0,EvenSum=0;
for(i=0;i<10;i++){
    if(i%2==0){
        EvenSum+=a[i];
    }
    else{
        OddSum+=a[i];
    }
}
printf("Difference between even and odd index elements' sum: %d",EvenSum-OddSum);

return 0;
}