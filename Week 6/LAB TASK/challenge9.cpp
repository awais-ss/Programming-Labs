#include <iostream>
using namespace std;

int main()
{
    int n, m;

    cout << "Enter the size of first even array: ";
    cin >> n;
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter first array digit " << i + 1 << ": ";
        cin >> arr1[i];
    }
    cout << "Enter the size of second array: ";
    cin >> m;
    int arr2[m];
    for (int i = 0; i < m; i++)
    {cout << "Enter second array digit " << i + 1 << ": ";
        cin >> arr2[i];
    }

    int mid = n / 2;
    int total = n + m;
    int result[total];
    for (int i = 0; i < mid; i++)
    {
        result[i] = arr1[i];
    }
    for (int i = 0; i < m; i++)
    {
        result[mid + i] = arr2[i];
    }
    for (int i = mid; i < n; i++)
    {
        result[i + m] = arr1[i];
    }

    cout << "FINAL COMBINE ARRAY IS:";
    for (int i = 0; i < total; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}