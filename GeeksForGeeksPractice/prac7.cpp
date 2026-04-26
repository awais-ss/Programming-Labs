#include <iostream>
using namespace std;
void get_arr(int arr[], int arr_size)
{
    for (int i = 0; i < arr_size; i++)
    {
        cout << "ENTER " << i + 1 << " DIGIT:";
        cin >> arr[i];
    }
}
void max(int arr[], int arr_size)
{
    double product = 1;
    for (int i = 0; i < arr_size - 3; i++)
    {
        for (int j = i + 1; j < arr_size - 2; j++)
        {
            for (int k = j + 1; k < arr_size - 1; k++)
            {
                for (int l = k + 1; l < arr_size; l++)
                {
                    product = (product * arr[i] * arr[j] * arr[k]*arr[l]);
                }
            }
        }
    }
}
int main()
{
    int arr_size, mul;
    cout << "ENTER ARRAY SIZE:";
    cin >> arr_size;
    // cout << "ENTER HOW MANY MULLTIPLES:";
    // cin >> mul;
    int arr[arr_size];
    get_arr(arr, arr_size);
    cout << "============";
    return 0;
}