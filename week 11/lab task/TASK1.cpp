 #include <iostream>
 using namespace std;
 int matrixform(int cardata[][5], int row, int col){
for (int i = 0; i < row; i++)
{
    for (int j = 0; j < col; j++)
    {
        cout<<cardata[i][j]<<"   ";
    }
    cout<<endl;
}

 }
 int main()
 {
 int cardata[5][5]={
    //red|black|brown|blue|gray
    {10,7,12,10,4},//suzuki
    {18,11,15,17,2},//toyota
    {23,19,12,16,14},//nissan
    {7,12,16,0,2},//bmw
    {3,5,6,2,1},//audi
 };
 int row=5;
 int col=5;
 matrixform(cardata,row,col);
 return 0;
 }