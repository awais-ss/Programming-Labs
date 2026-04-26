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
void get_group_arr(int arr[], int arr_size, int group_size)
{
    for (int i = 0; i < arr_size; i = i + group_size)
    {
        for (int j = i; j < i + group_size; j++)
        {
            if (j < arr_size)
            {
                cout << arr[j];
            }
        }
        cout << endl;
    }
}
void get_rev_group_arr(int arr[], int arr_size, int group_size)
{
    for (int i = group_size; i <= arr_size; i += group_size)
    {
        for (int j = i - 1; j >= (i - group_size); j--)
        {
            {
                cout << arr[j];
            }
        }
        cout << endl;
    }
    if ((arr_size % group_size) != 0)
    {
        int left = ((arr_size / group_size) * group_size);
        for (int i = arr_size-1; i >= left; i--)
        {
            cout << arr[i];
        }
    }
}
int main()
{
    int arr_size, group_size;
    cout << "ARRAY SIZE:";
    cin >> arr_size;
    cout << "GROUP SIZE:";
    cin >> group_size;
    int arr[100];
    get_arr(arr, arr_size);
    get_group_arr(arr, arr_size, group_size);
    cout << "------------------------" << endl;
    get_rev_group_arr(arr, arr_size, group_size);
    return 0;
}
