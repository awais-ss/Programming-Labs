#include <iostream>
using namespace std;
int main()
{
    string pass1;
    pass1 = "pass6789";
    string pass2;
    cout << "Enter your password:";
    cin >> pass2;
    if (pass1 == pass2)
    {
        cout << "wow! you cracked the code";
    }
    else
    {
        cout << "nice try buddy, try again";
    }
    return 0;
}