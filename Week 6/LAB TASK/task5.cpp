#include <iostream>
using namespace std;
int main()
{
    int ind;
    cout << "How many indexes you want?";
    cin >> ind;
    int num[ind];
    for (int i = 0; i < ind; i++)
    {
        {
            cout << "ENTER YOUR " << i + 1 << " NUMBER:";
            cin >> num[i];

        // cout<<"\n";
        }

    }
    for (int i = 0; i < ind; i++)
    {
                            {
            cout<<"YOUR "<<i+1<<" VALUE IS:"<<num[i];
            cout<<"\n";
        }
    }
    
    
    
    return 0;
}
