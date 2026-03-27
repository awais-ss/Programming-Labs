#include <iostream>
using namespace std;
int main()
{
int size;
cout<<"Enter the size of a array:";
cin>>size;
double arr[size];
double sum=0;
for (int i = 0; i < size; i++)
{
    cout<<"Enter your resistance "<<i+1<<" number:";
    cin>>arr[i];
    sum=sum+arr[i];
}
cout<<"Your resistence is "<<sum<<" ohm";
return 0;
}