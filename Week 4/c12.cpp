#include <iostream>
using namespace std;
int main(){
int t,t1,t2;
cout<<"Enter large reading temparature :";
cin>>t1;
cout<<"Enter small reading temparature :";
cin>>t2;
t=(t1-t2);
if (t>10)
{
    cout<<"The difference is too big";
}
else
{
    cout<<"program is end";
}

    
}