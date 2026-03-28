#include <iostream>
using namespace std;
void sumofnumber(int arr[],int size){
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        sum=sum+arr[i];
    }
    cout<<"THE SUM IS:"<<sum;
}
int main()
{
    int quantity;
   cout<<"ENTER THE QUANTITY OF ELEMENTS:";
   cin>>quantity;
int num[100];
for (int i = 0; i < quantity; i++)
{
    cout<<"Enter your "<<i+1<<" element:";
    cin>>num[i];
}
sumofnumber(num,quantity);
return 0;
}