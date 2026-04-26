#include <iostream>
using namespace std;
void sort(int a[]){
    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            if (a[i]<a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            
        }
    }
    
    
}
int main()
{
 string arr_player_name[1000] = {"ALI", "HAMAD", "SAIM", "ASHRAF", "HAIDER"};
    int arr_player_age[1000] = {18, 19, 20, 19, 19};
    int arr_player_level[1000] = {55, 75, 62, 69, 67};
    int arr_player_kills[1000] = {40, 55, 64, 46, 59};
    float arr_player_total_games[1000] = {5, 5, 5, 5, 5};
    float arr_player_win_count[1000] = {2, 4, 4, 3, 5};
    float arr_player_win_rate[1000];
    sort(arr_player_age);
    for (int i = 0; i < 5; i++)
    {
       cout<< arr_player_age[i]<<"   ";
    }
    

return 0;
}