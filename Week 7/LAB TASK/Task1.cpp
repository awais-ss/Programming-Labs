#include <iostream>
using namespace std;
float min(float a,int b){
if (a<b)
{
    return a;
}
else
{
    return b;
}

}
int main()
{
    float number1, number2;
    cout << "ENTER YOUR 1 NUMBER:";
    cin >> number1;
    cout << "ENTER YOUR 2 NUMBER:";
    cin >> number2;
    float number=min(number1,number2);
    cout<<number<<" is minimum";
return 0;
}