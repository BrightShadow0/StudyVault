//write a code to check if entered coordinate lies on X axis or Y axis or the origin viz. (0,0)
#include <stdio.h>
int main(){
double x,y;
printf("Enter coordinate: ");
scanf("%d %d",&x,&y);

if(x==0)
printf("Coordinate lies on Y-axis");
else if(y==0)
printf("coordinate lies on X-axis");
else if(x==0 && y==0)
printf("coordinate lies on Origin");
else
printf("coordinate lies on neither axes, nor on the origin");
return 0;
}
