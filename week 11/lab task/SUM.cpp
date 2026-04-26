#include <iostream>
using namespace std;
void get_arr(int arr[][3], int row){
cout<<"ENTER 2D ARRAY:"<<endl;
for (int i = 0; i < row; i++) {
   for (int j = 0; j < 3; j++) {
      cout<<"ENTER ["<<i<<"]["<<j<<"] ELEMENT:";
      cin>>arr[i][j];
   }
}

}
int get_sum(int arr[][3], int row){
   int sum=0;
   for (int i = 0; i < row; i++) {
      for (int j = 0; j < 3; j++) {
         sum+=arr[i][j];
      }
   }
   return sum;
}
int main()
{

 int col=3;
 cout<<"ENTER ROW SIZE:";
 int row;
 cin>>row;
 int arr[row][3];
 get_arr(arr,row);
  int result=get_sum(arr,row);
  cout<<"RESULT IS:"<<result;
return 0;
}