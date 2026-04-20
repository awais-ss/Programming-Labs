#include <iostream>
using namespace std;
int add_fifteen(int a)
{
    int c = a + 15;
    return c;
}

int main()
{
    cout << "HOURD:";
    int hrs;
    cin >> hrs;
    cout << "MINUTES:";
    int min;
    cin >> min;
    int total_min = (hrs * 60) +min;
    total_min = add_fifteen(total_min);
    hrs = total_min / 60;
    min = total_min % 60;
    cout << hrs << ":" << min;
    return 0;
}