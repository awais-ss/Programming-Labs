#include <iostream>
using namespace std;
void get_arr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "ENTER " << i + 1 << " DIGIT:";
        cin >> arr[i];
    }
}
void show_arr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
}
int main()
{
    int n;
    cout << "Enter your arrays size:";
    cin >> n;
    int arr[n];
    get_arr(arr, n);
    show_arr(arr, n);
    return 0;
}
