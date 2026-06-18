//Given length and breadth of rectangle, write a program to find whether area is greater than perimeter 

#include <stdio.h>
int main(){
float length,breadth,area,perimeter;
printf("Enter length: ");
scanf("%f",length);
printf("Enter breadth: ");
scanf("%f",breadth);
area=length*breadth;
perimeter=2(length+breadth);
printf("Area would be: ");
scanf("%f",area);
printf("Perimeter would be: ");
scanf("%f",perimeter);
if(area>perimeter){
    printf("Area of given rectangle is greater than it's perimeter");
}
if(area==perimeter){
    printf("Area of given rectangle is equal to it's perimeter");
}
if(area<perimeter){
    printf("Area of given rectangle is lesser than it's perimeter");
}
return 0;
}