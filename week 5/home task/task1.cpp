#include <iostream>
using namespace std;
int main(){
char character;
cout<<"Enter character:";
cin>>character;
while (character != 'n' && character != 'N')
{
    cout<<"I'm HAPPY!";
    cout<<"enter n to end ,or any key to continue";
    cin>>character;
}

    
}