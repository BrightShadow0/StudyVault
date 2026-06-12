#include <iostream>
using namespace std;
int main(){
float p,r,t,si;
cout<<"Enter Principal amount, Rate per year, and time interval respectively: ";
cin>>p>>r>>t;
cout<<endl;
cout<<"Enter Principal amount(Rs.): "<<p<<endl;
cout<<"Enter Rate(%pa): "<< r<<endl;
cout<<"Enter Duration(years): "<< t<<endl;
cout<<endl;
cout<<"Entered details summary: "<<endl; cout<<"Finding simple interest on"; cout<<" principal "<<p<<" Rs."; cout<<" at "<<r<<" pcpa"; cout<<" for "<<t<<" years"<<endl<<endl;
si=(p*r*t)/100;
cout<<"Simple Interest for given data is: "<<si<<" Rupees."<<endl;

cout<<"Total return value = "<<p+si<<" Rs."<<endl<<endl;}