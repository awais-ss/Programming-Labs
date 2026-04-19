//symmetry 
#include <iostream>
using namespace std;
int reversee(int num){
int first_number,second_number,third_number;
third_number=num%10;
int remaining=num/10;
second_number=remaining%10;
remaining=remaining/10;
first_number=remaining%10;

int reverse_number=(first_number*1)+(second_number*10)+(third_number*100);
return reverse_number;
}
string compare(int a,int b){
    if (a==b)
    {
        return "IT IS SYMMETRY";
    }
    else
    {
        return "NOT SYMMETRY";
    }
    
}
int main()
{
cout<<"ENTER 3 DIGIT NUMBER:";
int number;
cin>>number;
//to find each number;
int reverse_number=reversee(number);
//comparing
string comparing=compare(number,reverse_number);
cout<<comparing;
return 0;
}