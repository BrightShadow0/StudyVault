#include <iostream>
using namespace std;
int main() {
    cout<<endl;
float r;
cout<<"Enter radius (in units): ";
cin>>r;
float V,pi;
pi=3.14159;
V=(4*pi*r*r*r)/3;
cout<<"volume of sphere for given radius is: "<<V<<" cubic units"<<endl<<endl;
}