//power
#include <iostream>
#include <cmath>
using namespace std;
double power(double number1, double number2){
    return pow(number1,number2);
}
int main()
{
double result;
double num1,num2;
    cout << "ENTER YOUR BASE:";
    cin >> num1;
    cout << "ENTER YOUR POWER:";
    cin >> num2;
    result=power(num1,num2);
    cout<<result<<" is the result of "<<num1<<" with power "<<num2;
return 0;
}