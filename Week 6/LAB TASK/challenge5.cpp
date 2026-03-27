#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the numbers length:";
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        int num;

        cout << "ENTER " << i + 1<<" NUMBER :";
        cin >> num;
        bool isfound = false;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] == num)
            {
                isfound = true;
                break;
            }
        }
        if (isfound)
        {
            cout << "Repeat ,digit exist";
            cout<<"\n";
            i--;
        }
        else
        {
            arr[i] = num;
        }
    }
    cout << "Final number is:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}