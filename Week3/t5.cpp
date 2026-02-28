#include <iostream>
using namespace std;
main(){
string name;
float days,cal,wgt,tw;
cout<<"Enter your name:";
cin>>name;
cout<<"Enter your current weight:";
cin>>wgt;
cout<<"Enter the weight you want to lose:";
cin>>tw;
days=tw*15;
cout<<""<<name<<" can lose his/her targeted weight in "<<days<<" days if he/she will follow the doctor's recommendation.";
}