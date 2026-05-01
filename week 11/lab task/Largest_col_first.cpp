#include <iostream>
using namespace std;
// int row, col;
void get_arr(int arr[3][3])
{
    cout << "ENTER ARRAYS:";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "ENTER ELEMNT [" << i << "][" << j << "]:";
            cin >> arr[i][j];
        }
    }
}
void show_arr(int arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
void LARGEST_FIRST(int arr[3][3])
{
    int max_col;
    for (int j = 0; j < 2; j++)
    {
        if (arr[0][j] < arr[0][j + 1])
        {
            max_col = j;
        }
    }
for (int i = 0; i < 3; i++)
{
        int temp = arr[i][max_col];
    arr[i][max_col] = arr[i][0];
    arr[i][0] = temp;
}

}

int main()
{
    // int arr_size;
    // cout << "ARRAY SIZE:";
    // cin >> arr_size;
    int row = 3, col = 3;
    int arr[3][3];
    get_arr(arr);
    cout << "\n===============" << endl;
    show_arr(arr);
    cout << "\n===============" << endl;
    LARGEST_FIRST(arr);
    cout << "\n===============" << endl;
    show_arr(arr);
    return 0;
}