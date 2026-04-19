#include <iostream>
using namespace std;
string checker(char a){
    if (a>='a' && a<='z')
    {
        return "SMALL CHARACTERS";
    }
    else if((a>='A' && a<='Z'))
    {
        return "LARGE CHARACTERS";
    }
    else
    {
        return "SPECIAL CHARACTER";
    }
    
}
int main()
{
char character;
cout<<"ENTER A CHARACTER YOU WANT TO CHECK:";
cin>>character;
string checker_result=checker(character);
// checker(character);
cout<<character<<" is "<<checker_result;
return 0;
}