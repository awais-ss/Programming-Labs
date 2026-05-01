#include <iostream>
using namespace std;
int add(int *a, int *b){
    return *a+*b;
}
int add_without_ref(int a, int b){
    return a+b;
}
int main()
{
int a=10;
int b=20;
cout<<add(&a,&b);
cout<<endl;
cout<<add_without_ref( a,  b);
return 0;
}