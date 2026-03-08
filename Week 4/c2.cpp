#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter your 1 no:";
    cin >> a;
    cout << "enter your 2 no:";
    cin >> b;
    if (a < b)
    {
        cout << "your " << b << " is greater than " << a;
    }
    if (a > b)
    {
        cout << "your " << a << " is greater than " << b;
    }
    return 0;
}