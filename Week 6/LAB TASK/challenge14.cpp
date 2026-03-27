#include <iostream>
using namespace std;

int main()
{
    int correctPin = 1234;
    
    cout << "========= ATM SYSTEM ==========" << endl;

    for (int i = 1; i <= 3; i++)
    {
        cout << "Enter your PIN digits one by one (Attempt " << i << "):" << endl;
        
        int extra[100];
        for (int j = 0; j < 4; j++)
        {
            cin >> extra[j];
        }

        int enteredPin = 0;
        for (int j = 0; j < 4; j++)
        {
            enteredPin = (enteredPin * 10) + extra[j];
        }

        if (enteredPin == correctPin)
        {
            cout << "Login Successful!" << endl;
            
            int account_balance = 10;
            int choice = 0;
            
            while (choice != 4)
            {
                cout << "Enter Choice: ";
                cin >> choice;
                cout << "\n-------ATM-------" << endl;
                cout << "1: Check Balance" << endl;
                cout << "2: Deposit Money" << endl;
                cout << "3: Withdraw Money" << endl;
                cout << "4: Exit" << endl;

                if (choice == 1)
                {
                    cout << "Balance: " << account_balance << endl;
                }
                else if (choice == 2)
                {
                    cout << "Amount to deposit: ";
                    int deposit_amount;
                    cin >> deposit_amount;
                    
                    cout << "Successfully deposited" << endl;
                }
                else if (choice == 3)
                {
                    cout << "Amount to withdraw: ";
                    int withdraw_amount;
                    cin >> withdraw_amount;
                  cout << "Successfully withdraw" << endl;
                }
                else if (choice == 4)
                {
                    cout << "PROGRAM END" << endl;
                    return 0;
                }
                else
                {
                    cout << "Invalid choice" << endl;
                }
            }
        }
        else
        {
            if (i < 3)
            {
                cout << "try again." << endl;
            }
            else
            {
                cout << "Your card has been blocked!" << endl;
            }
        }
    }

    return 0;
}