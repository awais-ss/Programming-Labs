#include <iostream>
using namespace std;
int main(){
string username;
string password;
cout<<"Enter username:";
cin>>username;
cout<<"Enter password:";
cin>>password;
    for (int i = 1; i < 4; i++)
    {
        if (username=="admin" && password=="123")
        {
            cout<<"successfully login";
            cout<<"\n";

        }
        else
        {
            cout<<"wrong login info";
        }
        if (i==3 && !(username=="admin" && password=="123"))
        {
            cout<<"max attempt"<<endl<<"exit";
        }
        
        
    }
   
 
}