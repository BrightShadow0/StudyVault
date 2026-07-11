//Given length and breadth of rectangle, write a program to find whether area is greater than perimeter 

#include <stdio.h>
int main(){
float length,breadth,area,perimeter;
printf("Enter length: ");
scanf("%f",&length);
printf("Enter breadth: ");
scanf("%f",&breadth);
area=length*breadth;
perimeter=2*(length+breadth);
printf("Area: %f sq. units (l x b) \n",area);
printf("Perimeter: %f units [2(l+b)] \n",perimeter);
if(area>perimeter){
    printf("Area is greater than it's perimeter\n");
}
if(area==perimeter){
    printf("Area is equal to it's perimeter\n");
}
if(area<perimeter){
    printf("Area is lesser than it's perimeter\n");
}
return 0;
}