#include <iostream>
using namespace std;
int main()
{
    int dig;
    int word[100];
    cout << "HOW MANY DIGITS YOU WANT:";
    cin >> dig;
    cout << "ENTER YOUR DIGITS ONE BY ONE:";
    cout << "\n";
    //to get digits
    for (int i = 0; i<dig; i++)
    {
        int num;
        cin>>word[i];
    }
    //For horizontal 
    cout<<"THE ORDER IS:";
    for (int i = 0; i<dig; i++)
    {
        cout<<word[i]<<" ";
    }
    cout << "\n";
    //to reverse
    cout<<"THE REVERSE ORDER IS:";
for (int i = dig-1; i >= 0; i--)
{
    cout<<word[i]<<" ";
}


    return 0;
}