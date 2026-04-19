//sqrt function
#include <iostream>
#include <cmath>
using namespace std;
// float sqroot(float num){
// return sqrt(num);
// }
int main()
{
    float number,result;
cout<<"ENTER A NUMBER:";
cin>>number;
result=sqrt(number);
cout<<result<<" is the square root of "<<number;
return 0;
}