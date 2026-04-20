#include <iostream>

using namespace std;

float calucalation(float balance, int yrs) 
{
    float int_per;

    if (balance < 10000) 
    {
        int_per = 5.0/100;
    }
    else if (balance >= 10000 && balance <= 50000) 
    {
        int_per = 7.0/100;
    }
    else 
    {
        int_per = 0.0/100;
    }

    if (yrs >= 3) 
    {
        int_per = int_per + 2.0/100;
    }

    float int_amount = balance * int_per;
    float after_cal = balance + int_amount;

    return after_cal;
}

int main() 
{
    
    cout << "CURRENT BALANCE:";
    float balance;
    cin >> balance;
    cout << "ENTER YRS OF ACTIVATION:";
    int yrs;
    cin >> yrs;

    float result = calucalation(balance, yrs);

    cout << "UPDATE BALANCE:" << result << endl;

    return 0;
}