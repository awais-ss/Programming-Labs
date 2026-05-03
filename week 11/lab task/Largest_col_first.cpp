#include <iostream>
using namespace std;
void get_arr(int arr[][3], int row, int col)
{
    cout << "ENTER 2D ARRAY:" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "ENTER [" << i << "][" << j << "] ELEMENT:";
            cin >> arr[i][j];
        }
    }
}
void find_largest_col(int arr[3][3], int rows, int col)
{

    double count = -1000000000000;
    int largest_col = 0;

    for (int j = 0; j < 3; j++)
    {
        int add = 0;

        for (int i = 0; i < rows; i++)
        {
            add += arr[i][j];
        }

        if (add > count)
        {
            count = add;
            largest_col = j;
        }
    }

    for (int i = 0; i < rows; i++)
    {
        int temp = arr[i][0];
        arr[i][0] = arr[i][largest_col];
        arr[i][largest_col] = temp;
    }
}
void show_arr(int arr[][3], int row, int col)
{
    // cout << "ENTER 2D ARRAY:" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // cout << "ENTER [" << i << "][" << j << "] ELEMENT:";
            cout << arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int col = 3;
    int row = 3;
    // cin >> row;
    int arr[row][3];
    get_arr(arr, row, col);
    cout << endl;
    find_largest_col(arr, row, col);
    cout << endl;
    show_arr(arr, row, col);
    return 0;
}