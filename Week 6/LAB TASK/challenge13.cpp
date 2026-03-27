#include <iostream>
using namespace std;
int main()
{
cout<<"=========PROGRAM START==========\n";
string arr[100];
cout<<"ENTER THE LENGTH/QUANTITY OF ARRAY:";
int n;
cin>>n;

//to get array
for (int i = 0; i < n; i++)
{
    cout<<"ENTER YOUR "<<i+1<<" DIGIT:";
    cin>>arr[i];
}
//to check 7
string lastword=arr[n-1];

    if (lastword == "7")
    {
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<endl;
        }
        
    }
    else
    {
         for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<"7"<<endl;
        }
        
    }
    


return 0;
}