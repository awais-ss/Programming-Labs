#include <iostream>
using namespace std;
int main()
{
    int arr[100] = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < 6; i += 2)
    {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}