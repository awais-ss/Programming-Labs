/*Write a program to ask for a name until the user
enters “END”. Print the hello with the name each time
when the user enters. At the end of the program, print
"END" when the user enters END.*/
#include <iostream>
using namespace std;
int main(){
    string name;
    while (name != "END")
    {
        cout<<"ENTER YOUR NAME IN CAPITAL LETTERS:";
        cin>>name;
        
    }
    cout<<"HELLO ";
    cout<<"END";
}