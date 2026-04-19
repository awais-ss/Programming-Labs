#include <iostream>
#include <cmath>
using namespace std;
float rootfind(int value_a,int value_b,int value_c){
 float root_find=(value_b*value_b)-4*(value_a*value_c);
 return root_find;
}
void nature(float a){
    if (a>0)
    {
        cout<<a<<" is a real number";
    }
    else if (a<0)
    {
        cout<<a<<" is a complex/imaginary number";
    }
    else
    {
        cout<<a<<" is a real and equal";
    }
    
}
int main()
{
float a,b,c;
cout<<"ENTER THE VALUE OF a:";
cin>>a;
cout<<"ENTER THE VALUE OF b:";
cin>>b;
cout<<"ENTER THE VALUE OF c:";
cin>>c;
int root=rootfind(a,b,c);
// float determinant=
cout<<"ROOT IS:"<<root;
string root_nature;
nature(rootfind);
return 0;
}