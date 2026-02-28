#include <iostream>
using namespace std;
main(){
float matric,inter,ecat;

cout<<"Enter your matric number:";
cin>>matric;
cout<<"Enter your intermediate-1 marks :";
cin>>inter;
cout<<"Enter your ecat marks :";
cin>>ecat;

float a,b,c,agg;
a=(matric/1100*100)*0.1;
b=(inter/550*100)*0.4;
c=(ecat/400*100)*0.5;
agg=a+b+c;
cout<<"your aggregate is:"<<agg;

}

