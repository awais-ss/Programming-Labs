#include<iostream>
using namespace std;
int main() {
    int rows = 5;

    
    for (int i = 1; i <= rows; i++) {
        
        
        for (int j = 5; j > 5 - i; j--) {
            cout << j << " ";
        }
        
        cout << endl;
    }
    return 0;
}

