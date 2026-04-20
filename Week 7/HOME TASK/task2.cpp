#include <iostream>
using namespace std;

float cal(char type, float price)
{
    float rate;

    if(type == 'M')
        rate = 0.06;
    else if(type == 'E')
        rate = 0.08;
    else if(type == 'S')
        rate = 0.10;
    else if(type == 'V')
        rate = 0.12;
    else if(type == 'T')
        rate = 0.15;

    float finalPrice = price + (price * rate);
    return finalPrice;
}

int main()
{
    char type;
    float price;

    cout << "ENTER YOUR VEHICAL (M/E/S/V/T): ";
    cin >> type;

    cout << "ENTER PRICE: ";
    cin >> price;

    float result = cal(type, price);

    cout << "TOTAL VEHICAL PRICE IS: "<< result<<"$";

    return 0;
}