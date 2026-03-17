#include <iostream>
using namespace std;
int main()
{
    int num;
    int sum = 0;
    cout << "Enter a number :";
    cin >> num;
    while (num >= 0)
    {

        sum = sum + num;
        cout << "Enter a number :";
        cin >> num;
    }
    cout << "your total is :" << sum;
}