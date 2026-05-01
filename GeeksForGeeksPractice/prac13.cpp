#include <iostream>
using namespace std;

int main()
{
    int arr[7] = {100, 180, 260, 310, 40, 535, 695};
    int n = 7;
    int starter = 0;
    int total_profit = 0;

    for (int i = 0; i < n; i++)
    {

        if (i == n - 1 || arr[i + 1] < arr[i])
        {
            int profit = arr[i] - arr[starter];
            total_profit += profit;

            starter = i + 1;
        }
    }

    cout << "Total Profit: " << total_profit;
    return 0;
}