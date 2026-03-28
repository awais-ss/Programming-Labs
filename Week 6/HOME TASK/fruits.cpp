#include <iostream>
#include <string>

using namespace std;

int main() {
     cout << "===== Shop Inventory Report =====" << endl;
    string productNames[4] = {"Apple", "Banana", "Orange", "Mango"};
    float dollar[4] = {0.5, 0.3, 0.8, 1.2};
    int quantity[4] = {50, 100, 30, 20};

    cout << "===== Shop Inventory Report =====" << endl;

    
    for (int i = 0; i < 4; i++) {
       
        double totalValue = dollar[i] * quantity[i];

        
        cout << productNames[i] << ": $" << dollar[i] 
             << ", " << quantity[i] << " in stock, "
             << "Total value: $" << totalValue << endl;
    }

    return 0;
}