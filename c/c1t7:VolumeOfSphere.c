#include <stdio.h>

int main(){
    float r,v;
    r=5.0;
    printf("Enter value of r: ");
    printf("%f\n",r);
    printf("The volume for given radius is: ");
    v=(4*3.141592*r*r*r)/3;
    printf("%f\n",v);
}