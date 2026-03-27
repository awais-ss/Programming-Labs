#include <iostream>
using namespace std;
int main()
{

char word[100]="0abcxyz[]";
for (int i = 0; word[i] != '\0'; i++)
{
    word[i]=word[i]+1;
    cout<<word[i];
}

return 0;
}