#include <iostream>
using namespace std;
void get_arr(int arr[],int size){
for (int i = 0; i < size; i++)
{
    cout<<"ENTER YOUR "<<i+1<<" DIGIT:";
    cin>>arr[i];
}

}
void rev_arr(int arr[], int size){
    cout<<"YOUR REVERSE ARRAY IS:";
for (int i = size-1; i >=0; i--)
{
    cout<<arr[i]<<" ";
}
}
int main()
{
int size;
cout<<"ENTER THE ARRAY SIZE:";
cin>>size;
int arr[size];
get_arr(arr,size);
rev_arr(arr,size);
return 0;
}