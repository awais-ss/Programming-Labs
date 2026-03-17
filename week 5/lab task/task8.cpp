#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout << "Enter the number of rows:";
    cin >> rows;
    for (int i = 1; i < (rows / 2) + 1; i++) // show rows
    {
        for (int j = 1; j <= i; j++) // show columns
        {
            cout << "*";
        }
        cout << "\n";
    }
    for (int i = (rows / 2); i > 1; i--) // show rows
    {
        for (int j = i; j >1; j--) // show columns
        {
            cout << "*";
        }
        cout << "\n";
    }
}