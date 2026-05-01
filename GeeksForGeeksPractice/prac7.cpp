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
void max(int arr[], int arr_size, int mul)
{
    int product = 0;
    double product_arr[100];
    for (int i = 0; i < arr_size - 3; i++)
    {
        for (int j = i + 1; j < arr_size - 2; j++)
        {
            for (int k = j + 1; k < arr_size - 1; k++)
            {
                for (int l = k + 1; l < arr_size; l++)
                {
                    product_arr[product] = (arr[i] * arr[j] * arr[k] * arr[l]);
                    product++;
                }
            }
        }
    }
    for (int i = 0; i < product; i++)
    {
        for (int j = i + 1; j < product; j++)
        {
            if (product_arr[i] < product_arr[j])
            {
                int temp = product_arr[i];
                product_arr[i] = product_arr[j];
                product_arr[j] = temp;
            }
        }
    }
    cout << product_arr[0];
}
int main()
{
    int arr_size, mul = 4;
    cout << "ENTER ARRAY SIZE:";
    cin >> arr_size;
    int arr[arr_size];
    get_arr(arr, arr_size);
    cout << "============\n";
    max(arr, arr_size, mul);
    return 0;
}