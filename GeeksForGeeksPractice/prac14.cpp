#include <iostream>
using namespace std;
int main()
{
int arr[100]={1, 2, 2, 3, 4, 4, 4, 5, 5};
int size=9;
for (int i = 0; i < size; i++) {
    for (int j = i+1; j < size; j++) {
        if (arr[i]==arr[j])
        {
           arr[j]=0;

        }
    }
}
for (int i = 0; i < size; i++)
{
    cout<<arr[i]<<"  ";
}

return 0;
}