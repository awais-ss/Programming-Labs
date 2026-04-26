//work only for +int 

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
void sort_max(int arr[], int arr_size)
{
    for (int i = 0; i < arr_size; i++)
    {
        for (int j = i + 1; j < (arr_size); j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int largest_num(int arr[], int mul)
{ int start=1;
    for (int i = 0; i < mul; i++)
    {
        start *= arr[i];
    }
    return start;
}
int main()
{
    int arr_size, mul;
    cout << "ENTER ARRAY SIZE:";
    cin >> arr_size;
    cout << "ENTER HOW MANY MULLTIPLES:";
    cin >> mul;
    int arr[arr_size];
    get_arr(arr, arr_size);
    cout << "============";
    sort_max(arr, arr_size);
    int result=largest_num(arr, mul);
    
    cout<<result;
    return 0;
}