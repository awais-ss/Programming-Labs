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
int consective(int arr[], int arr_size)
{
    int sum = 0;
    int max_sum=0;
    for (int i = 0; i < arr_size-1; i++)
    {
        if (arr[i] == arr[i + 1])
        { 
            sum++;
            if (sum>max_sum)
            {
                max_sum=sum;
            }
        }
        else
        {
            sum=0;
        }
    }

    return max_sum+1;
}
int main()
{
    int arr_size;
    cout << "ENTER ARRAY SIZE:";
    cin >> arr_size;
    int arr[arr_size];
    get_arr(arr, arr_size);
    cout << "============\n";
    int result = consective(arr, arr_size);
    cout << result;
    return 0;
}