#include <iostream>
using namespace std;
main(){
float a,t,v1,v2;
cout<<"Enter Acceleration:";
cin>>a;
cout<<"Enter initisal velocity:";
cin>>v1;
cout<<"Enter time taken:";
cin>>t;
v2 = (a*t) + v1;
cout<<"Your final velocity is:"<<v2<<" ms^-1";
}