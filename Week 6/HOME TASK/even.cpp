#include <iostream>
using namespace std;
void even(int arr[],int size){
    int n=0;
for (int i = 0; i < size; i++)
{
    if (arr[i]%2==0)
    {
        n++;
    }
}
cout<<"THE NUMBER OF EVEN NUMBERS ARE:"<<n;
}
int main()
{
cout<<"Enter the quantity of numbers:";
int quantity;
cin>>quantity;
int numbers[quantity];
for (int i = 0; i < quantity; i++)
{
    cout<<"YOUR "<<i+1<<" NUMBER IS:";
    cin>>numbers[i];
}
even(numbers,quantity);
return 0;
}