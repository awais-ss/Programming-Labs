#include <iostream>
using namespace std;
int breaknumber(int a){
int num[45;
for (int i = 0; i < 5; i++)
{
   num[4-i] =a%10;
    a=a/10;
}

}
int main()
{
cout<<"ENTER FIVE DIGIT NUMBER:";
int num;
cin>>num;
//function to break digits into single
int singlenumber=breaknumber(num);
//function to some
//function to check oddish or evenish
return 0;
}