#include <iostream>
using namespace std;
int main(){
string name;
float discount,price,total;
cout<<"Enter the country name bruh:";
cin>>name;
cout<<"Enter the ticket price:";
cin>>price;
if (name == "ireland")
{
    discount=price*0.10;
}
else
{
    discount=price*0.05;
}
total=price-discount;
cout<<"Your total price including discount is:"<<total;



}
