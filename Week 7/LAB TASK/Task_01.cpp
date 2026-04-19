#include <iostream>
using namespace std;
int add(int num1, int num2)
{int sum;
    sum = num1 + num2;
    return sum;
}
int main()
{
// int sum;
    int number1, number2;
    cout << "ENTER YOUR 1 NUMBER:";
    cin >> number1;
    cout << "ENTER YOUR 2 NUMBER:";
    cin >> number2;
    int sum=add(number1, number2);
    cout<<"THE SUM OF 2 NO's ARE:"<<sum;
    return 0;
}
