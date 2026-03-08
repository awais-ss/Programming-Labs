#include <iostream>
using namespace std;
main()
{
    int monthly_salary = 10000;
    int laptop_rate = 50000;
    int advance, months;
    advance = monthly_salary * (5 / 100.0) * 6;
    if (advance >= monthly_salary * 0.5)
    {
        cout << "you can buy a laptop";
    }
    if (advance < monthly_salary * 0.5)
    {
        months = laptop_rate / (monthly_salary * 0.5);
        cout << "Months required to buy laptop is:" << months;
    }
}
