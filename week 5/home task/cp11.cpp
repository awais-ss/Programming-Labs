#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the length of right triangle:";
    cin >> n;
    for (int i = 1; i < n + 1; i++) // show crows
    {
        for (int j = 1; j <= i; j++) // show columns
        {
            cout << "*";
        }
        cout << "\n";
    }
}