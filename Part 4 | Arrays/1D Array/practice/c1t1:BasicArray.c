#include <stdio.h>
int main(){

    int sub[5];
    printf("\n%d\n",sub[3]);

    int a[5] = {1,2,3,4,5};
    a[4] = 500;
    printf("%d\n",a[2]);

    double b[6] = {1.3,2.70,3.14159,4.926,5,0};
    b[2] = 3.141592653589;
    printf("%lf\n",b[2]);

    char c[5] = {'A','b','#','D','e'};
    c[3] = 'S';
    printf("%c\n",c[4]);

    int arr[15];
    for(int i=0;i<=4;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    
    int num;
    printf("Enter element to find: ");
    scanf("%d",&num);
    for(int j=1;j<=15;j++){
        if(num==arr[j]){
        printf("Element found at index %d ",j);
        break;}
        
        else{
        printf("not found");
        break;
        }
    }

    return 0;
}