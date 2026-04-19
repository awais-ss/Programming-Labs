#include <iostream>
using namespace std;
float mul(float a){
    float result=a*5;
    return result;
}
int main()
{
float num;
cout<<"Enter Number:";
cin>>num;
float result;
result=mul(num);
cout<<result<<" = "<<num<<" * 5 ";
return 0;
}