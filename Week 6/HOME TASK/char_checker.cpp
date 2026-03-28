#include <iostream>
using namespace std;
int main()
{
    string name[100];
    int num;
    cout<<"HOW MANY NAMES YOU WANNA PRINT:";
    cin>>num;
    int n=0;
    char character;
    cout<<"ENTER THE CHARACTER TO CHECK IT:";
    cin>>character;
    cin.ignore();
for (int i = 0; i < num; i++)
{
    cout<<"YOUR "<<i+1<<" NAME IS:";
    getline(cin,name[i]);
    if (name[i][0]==character)
    {
       n++;
    }
    
}
cout<<"YOUR NAMES START WITH "<<character<<" IS :"<<n;

return 0;
}