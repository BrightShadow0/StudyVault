#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
   
    int a[5] = {1,2,3,4,5};
    a[4] = 500;
    printf("%d\n",a[2]);

    double b[6] = {1.3,2.70,3.14159,4.926,5,0};
    b[2] = 3.141592653589;
    printf("%lf\n",b[2]);

    char c[5] = {'A','b','#','D','e'};
    c[3] = 'S';
    printf("%d\n",c[4]);

    return 0;
}