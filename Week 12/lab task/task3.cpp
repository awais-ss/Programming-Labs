#include <iostream>
using namespace std;
int main()
{
int value=10;
int &new_value=value;
cout<<"OLD VALLUE IS:"<<value;
new_value=20;
cout<<endl;
cout<<"NEW VALLUE IS:"<<value;
value=30;
cout<<endl;
cout<<"2 NEW VALLUE IS:"<<value;
return 0;
}