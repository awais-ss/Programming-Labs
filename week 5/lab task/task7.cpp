#include <iostream>
using namespace std;
int main()
{
    int fre, num;
    cout << "Enter the number:";
    cin >> num;
    cout << "Enter the frequency tester number:";
    cin >> fre;
    int n=0;
    for (int i = num; i > 0; i /= 10)
    {
        if (i % 10 == fre)
        {
            n++;
        }
    }
    cout << "THE NUMBER'S FREQUENCY IS:" << n;
}