#include <iostream>
using namespace std;
int main()
{
int arr[10]={0,1,2,3,4,5,6,7,8,9};
for (int i = 0; i < 10; i++) {
    bool isfound=false;
    int sum=0;
    for (int j = 1; j < arr[i]; j++) {
        if (arr[i]%j==0)
        {
            sum++;
            
        }
        if (sum==2)
        {
          isfound=  true;
        }
        
        if (isfound==true)
        {
            arr[i]=0;
        }
    }
}

for (int i = 0; i < 10; i++)
{
    cout<<arr[i];
}

return 0;
}