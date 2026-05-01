#include <iostream>
using namespace std;
int main()
{
int x=11;

int *y=&x;
cout<<"VALUE OF x:"<<x<<endl;
cout<<"ADDRESS OF &x:"<<&x<<endl;
cout<<"VALUE OF *y:"<<*y;
return 0;
}