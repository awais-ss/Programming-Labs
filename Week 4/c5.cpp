#include <iostream>
using namespace std;
main()
{
  float cost, dis, price;
  cout << "Enter price:";
  cin >> price;
  if (price <= 5000)
  {
    dis = price - (price * 0.05);
    cout << "Your discounted bill is:" << dis;
  }

  else
  {
    dis = price - (price * 0.10);
    cout << "Your discounted bill is:" << dis;
  }
}