#include <iostream>
using namespace std;
int main() {
    string books[100]; 
    int totalBooks = 0;
    int choice;
    while (true) {
        cout << "Library Management System\n";
        cout << "1. Add Books\n";
        cout << "2. View Books\n";
        cout << "3. Borrow Books\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice == 1) {
            if (totalBooks < 100) {
                cout << "Enter the name of the book ypu eant to add: ";
                cin.ignore(); 
                getline(cin, books[totalBooks]);
                totalBooks = totalBooks + 1;
                cout << "Added successfully" << endl;
            }
            if (totalBooks >= 100) {
                cout << "Library is full bruh!" << endl;
            }
        }
        if (choice == 2) {
            if (totalBooks == 0) {
                cout << "No books available " << endl;
            }
            if (totalBooks > 0) {
                cout << "List of Available Books:" << endl;
                int i = 0;
                while (i < totalBooks) {
                    cout << i + 1 << ". " << books[i] << endl;
                    i = i + 1;
                }
            }
        }
        if (choice == 3) {
            if (totalBooks == 0) {
                cout << "The library is empty. Nothing to borrow." << endl;
            }
            if (totalBooks > 0) {
                string borrow;
                cout << "Enter the name of the book you want to borrow: ";
                cin.ignore();
                getline(cin, borrow);
                cout << "You have borrowed: " << borrow << endl;
            }
        }
        if (choice == 4) {
            cout << "Exit" << endl;
            break; 
        }
        if (choice < 1) {
            cout << "Invalid choice!" << endl;
        }
        if (choice > 4) {
           cout << "Invalid choice!" << endl;
        }
    }
    return 0;
}