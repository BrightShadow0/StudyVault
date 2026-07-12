#include <stdio.h>
int main(){
int j;
printf("\n%d ",j);
while (j<1000){
    printf("\n%d ",j); //will assign random number based on operations,
                    //can be 0 as well, in which case it will satisfy and run.
                    //But generally code is considered random execution
j++;
}
return 0;
}