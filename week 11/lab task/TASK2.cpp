#include <iostream>
using namespace std;
void toyota_blue_car(int cardata[][5], int row, int col)
{
    cout << "TOYOTA BLUE CARS:";
    cout << cardata[1][3];
}
void total_red_cars(int cardata[][5], int row, int col)
{
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        sum += cardata[i][0];
    }
    cout << endl
         << "TOTAL RED CARS ARE:" << sum;
}
void total_nissan_cars(int cardata[][5], int row, int col)
{
    int sum = 0;
    for (int i = 0; i < col; i++)
    {
        sum += cardata[2][i];
    }
    cout << endl
         << "TOTAL NISSAN CARS ARE:" << sum << endl;
}
void row_col(int cardata[][5], int row, int col)
{
    cout << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            // cardata[j][i] == cardata[i][j];
            cout << cardata[j][i] << "  ";
        }
        cout << endl;
    }
}
void total_cars(int cardata[][5], int row, int col)
{
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum += cardata[i][j];
        }
    }
    cout << "Total cars are:" << sum;
}
int main()
{
    int cardata[5][5] = {
        // red|  black| brown| blue|/**/ gray
        {10 /**/, 7 /**/, 12 /**/, 10 /**/, 4},   // suzuki
        {18 /**/, 11 /**/, 15 /**/, 17 /**/, 2},  // toyota
        {23 /**/, 19 /**/, 12 /**/, 16 /**/, 14}, // nissan
        {7 /**/, 12 /**/, 16 /**/, 0, /**/ 2},    // bmw
        {3 /**/, 5 /* */, 6 /* */, 2 /* */, 1},   // audi
    };
    int row = 5;
    int col = 5;

    toyota_blue_car(cardata, row, col);
    total_red_cars(cardata, row, col);
    total_nissan_cars(cardata, row, col);
    total_cars(cardata, row, col);
    row_col(cardata, row, col);
    // cout<<endl<<sum_of_red;

    return 0;
}