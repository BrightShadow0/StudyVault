//write a code to check if all 3 given coordinates (points) are on the same straight line or not
#include <stdio.h>
int main(){
double x1,x2,x3,y1,y2,y3;
printf("Enter first coordinate: ");
scanf("%d %d",&x1,&y1);
printf("Enter second coordinate: ");
scanf("%d %d",&x2,&y2);
printf("Enter third coordinate: ");
scanf("%d %d",&x3,&y3);
double m1,m2;
m1=(y2-y1)/(x2-x1);
m2=(y3-y2)/(x3-x2);
    if((m1==m2))
    printf("all 3 points are on one straight line");
    else
    printf("not all 3 points are on one straight line");
return 0;
}