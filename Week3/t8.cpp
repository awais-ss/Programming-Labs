#include <iostream>
using namespace std;
main(){
float fru,veg,p1,p2,tp,tp_pkr;
int w_fru,w_veg;

cout<<"Vegetables price per kg:";
cin>>veg;
cout<<"Fruits price per kg:";
cin>>fru;
cout<<"Total weight of vegetables:";
cin>>w_veg;
cout<<"Total weight of fruits:";
cin>>w_fru;

p1=veg*w_veg;
p2=fru*w_fru;
tp=p1+p2;
tp_pkr=tp/(1.94);
cout<<"Total earning in pkr is:"<<tp_pkr;
}