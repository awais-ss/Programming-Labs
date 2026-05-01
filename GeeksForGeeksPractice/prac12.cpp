#include <iostream>
using namespace std;
int main()
{
int arr[100]={1, 3, 6, 9, 11, 9, 2};
int sub;
int store=0;
for (int i = 0; i < 7; i++) {
    for (int j = i+1; j < 7; j++) {
        sub=arr[j]-arr[i];
        if (sub>store)
        {
            store=sub;
        }
        else
        {
            sub=0;
        }
        
    }
}
cout<<store;
return 0;
}