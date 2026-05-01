#include <iostream>
using namespace std;
int main()
{
int arr[100]={0,1,2,0,2,0,0,8};
for (int i = 0; i < 8; i++) {
    for (int j = i+1; j < 8; j++) {
        if (arr[i]==0)
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        
    }
}
for (int i = 0; i < 8; i++)
{
    cout<<arr[i]<<" ";
}

return 0;
}