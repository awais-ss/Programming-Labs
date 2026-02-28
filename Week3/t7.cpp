#include <iostream>
using namespace std;
main(){
string name;
int at,ct,nat,nct,sale1,sale2,ts;
float per,dper,remain;
cout<<"Enter the movie name:";
cin>>name;
cout<<"Enter the adult ticket price:";
cin>>at;
cout<<"Enter the child ticket price:";
cin>>ct;
cout<<"The number of adult ticket solds:";
cin>>nat;
cout<<"The number of child ticket sold:";
cin>>nct;
cout<<"Percentage for donations:";
cin>>per;
sale1=at*nat;
sale2=ct*nct;
ts=sale1+sale2;
dper=ts*per/100;
remain=ts-dper;
cout<<"Total amount genertaed from both tickets is: "<<ts<<endl;
cout<<"total charity amount is:"<<dper<<endl;
cout<<"remaining amount is:"<<remain;

}