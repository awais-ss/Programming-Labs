//greater number
#include <iostream>
using namespace std;
float bigger(float a,int b){
if (a>b)
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
    float number=bigger(number1,number2);
    cout<<number<<" is greater";
return 0;
}