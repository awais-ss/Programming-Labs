#include <iostream>
using namespace std;
int main(){
int integer;
cout<<"ENter integer:";
cin>>integer;
while (integer<=0)
{
    cout<<integer<<" is negative.";
    cout<<"\n";
    cout<<"Enter positive integer:";
    cin>>integer;
}

cout<<"program end.";

}