#include <iostream>
using namespace std;

bool isStrong(int num)
{
    int number = num;
    int sum = 0;

    while (num > 0)
    {
        int digit = num % 10; //find last dig
        int factorial = 1;
        for (int i = 1; i <= digit; i++)
        {
            factorial = factorial * i;
        }

        sum = sum + factorial;
        num = num / 10; //find remainder
    }

    return (sum == number);
}

int main()
{
    int num;
    cout << "Enter number:";
    cin >> num;

    if (isStrong(num))
        cout << "Strong Number";
    else
        cout << "Not Strong Number";

    return 0;
}