#include <iostream>
using namespace std;


void calculate(float v, float p1,float p2,float h) {
    float total = (p1 + p2) * h;

    if (total < v) {
        float remaining = v - total;
        cout << "Pool not full. " << total << "L filled, " << remaining << "L empty." << endl;
    } 
    else if (total == v) {
        cout << "Pool is full!" << endl;
    } 
else{
        float waste = v - total; 
        cout << "Overflow! Wasted " << waste << "L in " << h << " hours." << endl;
    }
}

int main() {
  float vol,p1,p2,hrs;
    cout << "enter vol: ";
    cin >> vol;
    cout << "pipe 1 flow: ";
    cin >> p1;
    cout << "pipe 2 flow: ";
    cin >> p2;
    cout << "hrs: ";
    cin >> hrs;

    cout << "--- Result ---" << endl;
    calculate(vol,p1,p2,hrs);

    return 0;
}