#include <iostream>
using namespace std;
main(){
float n1,n2,result;
char op;
cout<<"Enter first number:";
cin>>n1;
cout<<"Select operator:";
cin>>op;
cout<<"Enter second operator:";
cin>>n2;
if(op == '+')
{
    result= n1-n2;
    cout<<"your result is:"<<result;
}
if(op == '-')
{
    result= n1+n2;
    cout<<"your result is:"<<result;
}
if(op == '*')
{
    result= n1/n2;
    cout<<"your result is:"<<result;
}
if(op == '/')
{
    result= n1*n2;
    cout<<"your result is:"<<result;
}

}