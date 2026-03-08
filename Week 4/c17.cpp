#include <iostream>
using namespace std;
int main()
{
    string name;
    cout << "Enter the figure name:";
    cin>>name;
    if (name == "square")
    {
        float l, w, a;
        cout << "Enter length:";
        cin >> l;
        cout << "Enter width:";
        cin >> w;
        a = l * w;
        cout << "area is :" << a;
    }
    if (name == "rectangle")
    {
        float l, w, a;
        cout << "Enter length:";
        cin >> l;
        cout << "Enter width:";
        cin >> w;
        a = l * w;
        cout << "area is :" << a;
    }
    if (name == "circle")
    {
        float pi=3.14, r, a;
        cout << "Enter radius:";
        cin >> r;
        a = pi * r * r;
        cout << "area is :" << a;
    }
    if (name == "triangle")
    {
        float h, w, a;
        cout << "Enter height:";
        cin >> h;
        cout << "Enter width:";
        cin >> w;
        a = 0.5 * h * w;
        cout << "area is :" << a;
    }
}