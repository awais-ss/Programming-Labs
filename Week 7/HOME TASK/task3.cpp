#include <iostream>

using namespace std;

void calculation(int hrs, int days, int workers) 
{
    double available_days = days - (days * 0.10);
    
    int hrs_num = available_days * workers * 10;

    if (hrs_num >= hrs) 
    {
        int hrs_left = hrs_num - hrs;
        cout << "Yes!" << hrs_left << " hours left." << endl;
    }
    else 
    {
        int hoursNeeded = hrs - hrs_num;
        cout << "Not enough time!" << hoursNeeded << " hours needed." << endl;
    }
}

int main() 
{
    int hrs, days, workers;

    cout << "ENTER HRS:";
    cin >> hrs;
    cout << "ENTER DAYS:";
    cin >> days;
    cout << "ENTER NUMBER OF WORKERA:";
    cin >> workers;

    calculation(hrs, days, workers);

    return 0;
}