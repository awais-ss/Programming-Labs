#include <iostream>
using namespace std;
int main()
{
    int count = 5;
    int num[count];
    for (int i = 0; i < count; i++)
    {
        cout << "Enter your " << i + 1 << " value:";
        cin >> num[i];
        // cout<<"\n";
    }
    cout<<"YOUR OUTPUT IS FROM HERE"<<endl;
    cout<<"YOUR FIRST ELEMENT IS:"<<num[0];
    cout<<"\n";
cout<<"YOUR LAST ELEMENT IS:"<<num[4];
    return 0;
}