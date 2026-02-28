#include <iostream>
using namespace std;
main(){
int p1,p2,br,tp;
cout<<"Enter current population:";
cin>>p1;
cout<<"Enter birth rate per month:";
cin>>br;
tp=p1+(br*360);
cout<<"Your total population in 3 decades will be:"<<tp;

}