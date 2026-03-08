#include <iostream>
using namespace std;
int main()
{
    int speed;
    cout << "Enter the speed:";
    cin >> speed;
    if (speed <= 100)
    {
        cout << "Perfectoo! keep going";
    }
    else
    {
        cout << "WHOOO! You will be challenged";
    }
}