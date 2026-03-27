#include <iostream>
#include <climits>
using namespace std;
int main()
{
int size;
cout<<"Enter the size of array:";
cin>>size;
int arr[size];
for (int i = 0; i < size; i++)
{
    cout<<"Enter the "<<i+1<<" number:";
    cin>>arr[i];
}
int largest= INT_MIN;
for (int i = 0; i < size; i++)
{
    largest=max(arr[i],largest);
}
cout<<"YOUR LARGEST VALUE IS:"<<largest;
return 0;
}