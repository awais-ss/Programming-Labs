#include <iostream>
using namespace std;
void get_arr(int arr[3][3])
{
    cout << "ENTER 2D ARRAY:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "ENTER [" << i << "][" << j << "] ELEMENT:";
            cin >> arr[i][j];
        }
    }
}
void checker(int arr[][3])
{
    int one = 0;
    int zero=0;
    // bool isfound =false;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                if (arr[i][j] == 1)
                {
                    one++;
                }
            }
            else
            {
                if (arr[i][j]==0)
                {
                    zero++;
                }
                
            }
            
        }
    }
    if (one == 3 && zero == 6)
    {
        cout << "IDENTITY MATRIX";
    }
    else
    {
        cout << "NOT IDENTITY MATRIX";
    }
}
int main()
{
    int arr[3][3];
    get_arr(arr);
    checker(arr);
    return 0;
}