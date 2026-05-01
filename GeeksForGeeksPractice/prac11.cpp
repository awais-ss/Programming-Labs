#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {1, 2, 3};
    int n = 3;
    int mul = 1;
    for (int i = 1; i < n; i++)
    {
        mul = mul * 10;
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + (arr[i] * mul);
        mul = mul / 10;
    }
    int result = sum + 1;
    cout << result;
    return 0;
}