//write a code to check if entered coordinate lies on X axis or Y axis or the origin viz. (0,0)
#include <stdio.h>
int main(){
int x,y;
printf("Enter coordinate: ");
scanf("%d %d",&x,&y);

if (x == 0 && y == 0)
    printf("Coordinate lies on Origin");
else if (x == 0)
    printf("Coordinate lies on Y-axis");
else if (y == 0)
    printf("Coordinate lies on X-axis");
else
printf("coordinate does not lie on the axes nor the origin");
return 0;
}
