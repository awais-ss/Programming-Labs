#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *y = arr;

    for (int i = 0; i < 5; i++)
    {
        cout << "VALUE OF ELEMENT " << i + 1 << " :" << *(y + i) << endl;
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "ADDRESS OF ELEMENT " << i + 1 << " :" << (arr + i) << endl;
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "ADDRESS OF ELEMENT " << i + 1 << " :" << &arr[i] << endl;
    }
    cout << endl;
    string string_arr[3] = {"ALI", "saim", "WAQAR"};
    string *x = string_arr;
    for (int i = 0; i < 3; i++)
    {
        cout << "VALUE OF STRING ELEMENT " << i + 1 << " :" << *(x + i) << endl;
    }
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "ADDRESS OF STRING ELEMENT " << i + 1 << " :" << (string_arr + i) << endl;
    }
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "ADDRESS OF STRING ELEMENT " << i + 1 << " :" << &string_arr[i] << endl;
    }
    cout << endl;
    char cha[3] = {'a', 'b', 'c'};
    char *z = cha;
    for (int i = 0; i < 3; i++)
    {
        cout << "Address of character is " << i + 1 << ":" << &cha[i] << endl;
    }
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "ADDRESS OF CHARACTER ELEMENT " << i + 1 << " :" << (cha + i) << endl;
    }
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "value of element is " << i + 1 << ":" << *(z + i) << endl;
    }

    return 0;
}