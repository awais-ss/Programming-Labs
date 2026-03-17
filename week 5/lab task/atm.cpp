#include <iostream>
using namespace std;
int main()
{
    int pin, choice, balance=1000, deposit, withdraw;
    for (int i = 0; i < 3; i++)
    {
        cout << "ENter pin:";
        cin >> pin;
        if (pin == 1234)
        {
            cout << "LOGIN SUCCESSFULLY" << endl;
            cout << "--------ATM MENU----------" << endl;
            cout << "1- check balance" << endl
                 << "2- deposit money" << endl
                 << "3- withdrawal money" << endl
                 << "4- exit" << endl;
            cout << "Enter number from above:" << endl;
            cin >> choice;
            if (choice == 1)
            {
                
                cout << "YOUR BALANCE IS: " <<balance<< endl;
            }
            else if (choice == 2)
            {
                cout << "ENTER AMOUNT OF DEPOSIT:" << endl;
                cin >> deposit;
                cout << "YOU SUCCESSFULLY DEPOSITED " << endl
                     << deposit << "rs";
            }
            else if (choice == 3)
            {
                cout << "ENTER AMOUNT  YOU WANT TO WITHDRAW:" << endl;
                cin >> withdraw;
                cout << "YOU WITHDRAW " << withdraw << " rs" << endl;
                if (withdraw > deposit)
                {
                    cout << "INSUFFICIENT BALANCE";
                }
            }
            else if (choice == 4)
            {
                cout << "EXIT" << endl;
            }
            return 0;
        }
        else
        {
            cout << "wrong login" << endl;
        }
 
    }
    cout<<"BETTER NEXT TIME YOU THIEF";
}