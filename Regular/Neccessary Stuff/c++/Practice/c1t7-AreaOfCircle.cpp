#include <iostream>
using namespace std;
int main(){
float r;
cout<<"Enter value of r: ";
cin>>r;
float a = 3.142857*r*r;
cout<<"Area of circle for given r is: "<<a<<" square units"<<endl;
float c = 2*3.142857*r;
cout<<"Circumference of circle for given r is: "<<c<<" units"<<endl;
float v = (4*3.142857*r*r*r)/3;
cout<<"If given radius is for a sphere, volume would be: "<<v<<" cubic units"<<endl;
}