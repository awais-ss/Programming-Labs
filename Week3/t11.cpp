#include <iostream>
using namespace std;
main(){
int a,n,l,w,wall;
cout<<"Number of square meter you can paint:";
cin>>n;
cout<<"Enter width:";
cin>>w;
cout<<"Enter length:";
cin>>l;
a=l*w;
wall=n/a;
cout<<"total walls that can be paint:"<<wall;

}