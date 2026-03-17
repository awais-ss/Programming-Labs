/*Calculate the sum of first 5 natural numbers.*/
#include <iostream>
using namespace std;
int main(){
    int sum=0;
    for (int i = 1; i < 6; i++)
    {
        sum=sum+i;
    }
    cout<<sum;
}