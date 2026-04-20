#include <iostream>
using namespace std;
int breaknumber(int a){
int a1=a%10; //last num
a=a/10; //4 digit num
int a2=a%10; //2 last digit
a=a/10; //3 didits
int a3=a%10; //3 last digit
a=a/10;  // 2 digti
int a4=a%10; //4 last digit
a=a/10; //1 digit1
int sum=a1+a2+a3+a4+a;
}
string check(int a){
if (a%2==0)
{
    return "EVENISH";
}
else
{
    return "ODDISH";
}

}
int main()
{
cout<<"ENTER FIVE DIGIT NUMBER:";
int num;
cin>>num;
//function to sum
int sum=breaknumber(num);

//function to check oddish or evenish
string checker=check(sum);
cout<<checker;
return 0;
}