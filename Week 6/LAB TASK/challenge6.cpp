#include <iostream>
#include <climits>
using namespace std;
int main()
{
    // int arr[] = {1, 2, 3, 4, 5};
    // int size = 5;
    int size;
    cout<<"Enter the size of array:";
    cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the "<<i+1<<" number:";
        cin>>arr[i];
    }
    
    int smallest = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }

       
        
    }
     cout << "The smallest array is :" << smallest;
    return 0;
}