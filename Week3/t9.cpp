#include <iostream>
using namespace std;
main(){
int dig,sum,n1,n2,n3,n4,n5,n6,tn;
cout<<"Enter your 4 digirts:";
cin>>dig;
n1=dig/1000;
n2=(dig%1000);
n3=n2/100;
n4=n2%100;
n5=n4/10;
n6=n4%10;
tn=n1+n3+n5+n6;
cout<<"Your sum is:"<< tn;



}