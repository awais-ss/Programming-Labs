#include <iostream>
using namespace std;
main(){
float wgt,cost,area,cost2,cost3;
cout<<"Enter the weight of bag in pounds:";
cin>>wgt;
cout<<"Enter the cost of a bag:";
cin>>cost;
cout<<"Enter the area a bag can cover:";
cin>>area;

cost2=1/(wgt/cost);
cout<<"The price of the fertilizer for each pound is:"<<cost2<<endl;

cost3=1/(area/cost);
cout<<"The cost of using fertilizer for each square foot of the garden is:"<<cost3;

}