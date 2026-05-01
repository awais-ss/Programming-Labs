#include <iostream>
using namespace std;
void get_arr(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<"ENTER YOUR "<<i+1<<" DIGIT:";
        cin>>arr[i];
    }
    
}
int get_third_largest(int arr[],int size){
    for (int i = 0; i < size; i++) {
        for (int j = i+1; j < size; j++) {
            if (arr[i]<arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            
        }
    }
    return arr[2];
}
int main()
{
int arr[100];
cout<<"ARRAY SIZA:";
int size;
cin>>size;
get_arr(arr,size);
// // get_third_largest(get_arr,size);
int result=get_third_largest(arr,size);
cout<<"THIRD LARGEST NUMBER IS:"<<result;
return 0;


}
