#include <iostream>
using namespace std;
int main()
{
    int sum=0;
    float aver;
int num[]={1,2,3,4,5};
for (int i = 0; i < 5; i++)
{
    sum=sum+num[i];
}
cout<<"YOUR SUM IS:"<<sum;
aver=sum/5;
cout<<"\n";
cout<<"YOUR AVERAGE IS:"<<aver;
return 0;
}