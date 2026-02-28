#include <iostream>
using namespace std;
main(){
int wins,loses,draw,p1,p2,p3,total_p;
string team_name;
cout<<"ENTER NUMBER OF WINS:";
cin>>wins;
cout<<"ENTER NUMBER OF LOSES:";
cin>>loses;
cout<<"ENTER NUMBER OF DRAW:";
cin>>draw;
p1=wins*3;
p2=loses*0;
p3=draw*1;
total_p=p1+p2+p3;
cout<<"Enter team name:";
cin>>team_name;
cout<<""<<team_name<<" has obtain "<<total_p<<" in ASIA CUP TOURNAMENT";
}