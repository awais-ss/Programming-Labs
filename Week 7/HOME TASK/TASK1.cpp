#include <iostream>
using namespace std;

string volume(float a, float b, float c, string unit)
{
    double volume = (a * b* c) / 3.0; 
    if(unit == "millimeters")
        volume = volume * 1000000000;   
    else if(unit == "centimeters")
        volume = volume * 1000000;    
    else if(unit == "kilometers")
        volume = volume / 1000000000;   

    return to_string(volume) + " cubic ";
}

int main()
{
    float l, w, h;
    string unit;

    cout << "ENTER LENGTH:";
    cin>>l;
    cout<<"ENTER WIDTH:";
    cin>>w;
    cout<<"ENTER HEIGHT";
    cin>>h;

    cout << "Enter unit:";
    cin >> unit;

    cout << volume(l, w, h, unit);

    return 0;
}