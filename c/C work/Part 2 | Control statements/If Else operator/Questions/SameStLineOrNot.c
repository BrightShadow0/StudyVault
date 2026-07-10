
#include <stdio.h>
int main(){
int x1,x2,x3,y1,y2,y3;
printf("Enter first coordinate: ");
scanf("%d %d",&x1,&y1);
printf("Enter second coordinate: ");
scanf("%d %d",&x2,&y2);
printf("Enter third coordinate: ");
scanf("%d %d",&x3,&y3);
    if((x3-x2)*(y2-y1)==(x2-x1)*(y3-y2))
    printf("all 3 coordinates are on the same straight line");
    else
    printf("not all 3 coordinates are on the same straight line");
return 0;
}