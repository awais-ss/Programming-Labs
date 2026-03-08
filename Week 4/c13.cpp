#include <iostream>
using namespace std;
int main(){
float red,white,tulip,pred,pwhite,ptulip,grand_total;
float dis,price;
cout<<"Enter the quantity of red roses:";
cin>>red;
cout<<"Enter the quantity of white roses:";
cin>>white;
cout<<"Enter the quantity of tulip:";
cin>>tulip;
pred=red*2.0;
pwhite=white*4.10;
ptulip=tulip*2.50;
price=pred+pwhite+ptulip;
if (price>200)
{
    dis=price*0.2;
}
grand_total=price-dis;
cout<<"your total is: "<<price<<" but with discount it becomes:"<<grand_total;
}