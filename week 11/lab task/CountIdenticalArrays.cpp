#include <iostream>
using namespace std;
void get_arr(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "ENTER [" << i << "][" << j << "] ELEMENT:";
            cin >> arr[i][j];
        }
    }
}
int show_result(int arr[][3], int row, int col)
{
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = i + 1; j < row; j++)
        {
            if (arr[i][0] == arr[j][0] && arr[i][1] == arr[j][1] && arr[i][2] == arr[j][2])
            {
                sum++;
            }
        }
    }
    return sum+1;
}
int main()
{
    cout << "ENTER ROW:";
    int row;
    cin >> row;
    cout << "COL IS 3";
    int col = 3;
    int arr[row][3];
    get_arr(arr, row, col);
    cout << "\n";
    cout << show_result(arr, row, col);

    return 0;
}