#include <iostream>
using namespace std;
int main()
{
    cout << "      ======PROGRAM START======\n\n";
    int count;
    cout << "ENTER YOUR DIGIT QUANTITY/ARRAY SIZE:";
    cin >> count;
    cout << "      ======ENTER YOUR DIGITS======\n\n";
    int arr[100];
    for (int i = 0; i < count; i++)
    {
        cout << "ENTER YOUR " << i << " DIGIT:";
        cin >> arr[i];
    }
        cout << "      ======YOUR ARRAY IS:======\n\n";
    for (int i = 0; i < count; i++)
    {
        cout << arr[i];
    }
    cout<<"\n";
    cout << "      ======OUTPUT:======\n\n";
    int checker=0;
    for (int i = 0; i < count; i++)
    {
        if (arr[i]%2==0)
        {
            checker++;
        }
        
    }
    if (checker==count)
    {
        cout<<"ENTIRE ROW IS EVEN";
        cout<<"\n";
        cout<<"THIS IS SPECIAL ARRAY:";
    }
    else if (checker==0)
    {
       cout<<"ENTIRE ROW IS ODD";
       cout<<"\n";
       cout<<"THIS IS SPECIAL ARRAY:";
    }
    else
    {
        cout<<"THIS IS NOT SPECIAL ARRAY:";
    }
    
    return 0;
}