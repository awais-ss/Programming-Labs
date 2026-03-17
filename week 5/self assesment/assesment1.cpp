/*Write a C++ Program that asks the user to enter 5
numbers, one at a time, and add them together. This
is called a Running Total. Once the user is done,
display the total sum on the Console.*/
#include <iostream>
using namespace std;
main()
{
    int total = 0;
    int num;
    for (int i = 1; i <= 5; i++)
    {
        cout << "Enter your number :";
        cin >> num;
        total = total + num;
    }
    cout << "your total is:" << total;
}