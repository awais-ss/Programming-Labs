#include <iostream>
using namespace std;
int main()
{

    int a;
    cout << "Enter your number:";
    cin >> a;
    if (a % 2 == 0)
    {
        cout << "your number " << a << " is even";
    }
    if (a % 2 != 0)
    {
        cout << "your number " << a << " is odd";
    }
    return 0;
}