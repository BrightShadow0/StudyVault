#include <stdio.h>
int main(){
    int num,temp,pow;
    printf("Enter number: ");
    scanf("%d",&num);
    printf("Enter index: ");
    scanf("%d",&pow);
    temp = num;
    for(int i = 1;i<pow;i++)
    {
        num = num * temp;
    }
    printf("Value: %d",num);
    return 0;
}