// Print a message “I am happy” until user presses “y” or any key to exit.
#include <iostream>
using namespace std;
int main()
{
    // char letter='y';
    char letter;
    cout << "y to continue or any key for exists:";
    cin >> letter;
    while (letter == 'y')
    {
        cout << "I'm happy\n";
        cout<<"Press y to continue , or any other key to exit:";
        cin>>letter;

    }
cout<<"Exit";
}