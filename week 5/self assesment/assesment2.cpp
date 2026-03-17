/*Write a program to keep asking for a number until
the user enters a negative number. At the end, print
the sum of all entered numbers.*/
#include <iostream>
using namespace std;
int main(){
    int i;
    int sum=0;
    while (i !=-1)
    {
        cout<<"Enter the number:";
        cin>>i;
       sum=sum+i;
    }
 
    cout<<"Your grand sum is:"<<sum;
}