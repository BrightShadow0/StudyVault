//Display AP 100,97,94,.... till all terms are positive.
#include <stdio.h>
int main(){
printf("The AP is 100,97,94,....\n ");
int a=100;
for(int i=100;a>0;i=i-3){
    printf("%d, ",a);
    a=a-3;
}
    return 0;
}