// Write a code that prompts the user to input length of Fibonacci series and display the series.
#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 1, next;
    int n;
    cout << "Enter the number of time you want to itrate:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        cout << a << ",";
        next = a + b;
        a = b;
        b = next;
    }
}