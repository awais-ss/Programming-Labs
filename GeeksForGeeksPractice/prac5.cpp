#include <iostream>
using namespace std;
int get_arr(int arr[], int arr_size)
{
    for (int i = 0; i < arr_size; i++)
    {
        cout << "ENTER " << i + 1 << " DIGIT:";
        cin >> arr[i];
    }
}
int show_arr(int arr[], int arr_size)
{
    for (int i = 0; i < arr_size; i++)
    {
        cout << arr[i] << " ";
    }
}
int show_after_rotation(int arr[], int arr_size, int rotation)
{
    for (int j = 0; j < rotation; j++)
    {
        int temp = arr[0];
        for (int i = 0; i < (arr_size-1); i++)
        {
            arr[i] = arr[i+1];
        }
        arr[arr_size - 1] = temp;
    }
    for (int i = 0; i < arr_size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main()
{
    int arr_size, rotation;
    cout << "ENTER ARRAY SIZE:";
    cin >> arr_size;
    cout << "ENTER ROTATION NUMBER:";
    cin >> rotation;
    int arr[arr_size];
    get_arr(arr, arr_size);
    cout << endl<<"------before_rotation-------"<<endl;
    show_arr(arr, arr_size);
    cout << endl<<"-------after_rotation-------"<<endl;
    show_after_rotation(arr, arr_size, rotation);
    return 0;
}
