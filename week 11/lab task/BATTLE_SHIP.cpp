#include <iostream>
#include <string>
using namespace std;
void result(char board[][5], string coordinates)
{
    int row = coordinates[0] - 'A';
    int col = coordinates[1] - '1';
    if (board[row][col] == '-')
    {
        cout << "SPLASH";
    }
    else if (board[row][col] == '*')
    {
        cout << "BOOM";
    }
    else
    {
        cout << "WRONG COORDINATES...";
    }
}
int main()
{
    int row = 5;
    int column = 5;
    char board[5][5] = {
        {'-', '-', '-', '*', '*'},
        {'-', '*', '-', '-', '-'},
        {'*', '-', '-', '-', '*'},
        {'-', '*', '-', '-', '-'},
        {'-', '-', '*', '*', '-'}};
    cout << "   |  1  2  3  4  5" << endl;
    ;
    cout << "-- ===================" << endl;
    cout << "A  |  -  -  -  *  *  |" << endl;
    cout << "B  |  -  *  -  -  -  |" << endl;
    cout << "C  |  *  -  -  -  *  |" << endl;
    cout << "D  |  -  *  -  -  -  |" << endl;
    cout << "E  |  -  -  *  *  -  |" << endl;
    cout << "   ===================" << endl;
    cout << "ENTER YOUR COORDINATES:";
    string coordinates;
    cin >> coordinates;

    result(board, coordinates);
    return 0;
}
