#include <stdio.h>
int main(){
    int side;
    printf("Enter side length: ");
    scanf("%d",&side);
    for(int i=1;i<=side;i++){
        for(int i=1;i<=side;i++){
            printf("* ");}
        printf("\n");
    }
    return 0;
}