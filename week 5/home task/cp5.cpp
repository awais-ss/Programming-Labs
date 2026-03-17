#include<iostream>
using namespace std;
int main() {
    int n;
    int hcf;
    int lcm;
    cout << "Enter the first number: ";
    cin >> n;
    cout << "Enter the second number: ";
    cin >> hcf;
    int a = n;
    int b = hcf;
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    hcf = a;
    lcm = (n * hcf) / hcf;
    cout << "HCF: " << hcf << endl;
    cout << "LCM: " << lcm << endl;
    return 0;
}