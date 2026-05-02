#include <iostream>
#include <conio.h>
using namespace std;

//==========PROTOTYPE START==============
void sorting(int sort);
void captainMenu();
void playerMenu();
bool login();
void pause();
void displayList(int limit);
//==========PROTOTYPE END================

//==========DATA STRUCTURE START=========
int a = 5;
int user_choice;
string arr_player_name[1000] = {"ALI", "HAMAD", "SAIM", "ASHRAF", "HAIDER"};
int arr_player_age[1000] = {18, 19, 20, 19, 19};
int arr_player_level[1000] = {55, 75, 62, 69, 67};
int arr_player_kills[1000] = {40, 55, 64, 46, 59};
float arr_player_total_games[1000] = {5, 5, 5, 5, 5};
float arr_player_win_count[1000] = {2, 4, 4, 3, 5};
float arr_player_win_rate[1000];
//==========DATA STRUCTURE END===========

int main()
{
    system("cls");
    cout << "          =========================================" << endl;
    cout << "          <<               WELCOME               >>" << endl;
    cout << "          =========================================" << endl
         << endl;

    for (int i = 0; i < a; i++)
    {
        arr_player_win_rate[i] = (arr_player_win_count[i] / 5.0) * 100;
    }

    while (user_choice != 3)
    {
        cout << "SELECT THE OPTION " << endl;
        cout << "1: CAPTAIN / MANAGER" << endl;
        cout << "2: PLAYER REGISTRATION" << endl;
        cout << "3: EXIT" << endl
             << endl;

        cout << "ENTER YOUR CHOICE:";
        cin >> user_choice;
        system("cls");

        if (user_choice == 1)
        {
            if (login())
            {
                captainMenu();
            }
        }
        else if (user_choice == 2)
        {
            playerMenu();
        }
        else if (user_choice == 3)
        {
            cout << "                      .....LOGOUT....." << endl;
        }
        else
        {
            cout << "                      .....WRONG INPUT....." << endl;
            pause();
        }
    }
    return 0;
}

void pause()
{
    cout << "\nPRESS ANY KEY TO CONTINUE......" << endl;
    getch();
    system("cls");
}

bool login()
{
    system("cls");
    cout << endl
         << "                <<< LOGIN SECTION >>>             " << endl
         << endl;
    for (int i = 0; i < 3; i++)
    {
        string username;
        int password;
        cout << "ENTER YOUR USERNAME:";
        cin >> username;
        cout << "ENTER YOUR PASSWORD:";
        cin >> password;

        if (username == "ADMIN" && password == 123)
        {
            system("cls");
            cout << "                  LOGIN SUCCESSFULLY" << endl;
            return true;
        }

        if (i < 2)
            cout << "                      TRY AGAIN" << endl;
        else
        {
            cout << "                   TOO MANY ATTTEMPTS\n                   LOGIN FAILED! " << endl;
            pause();
        }
    }
    return false;
}

void displayList(int limit)
{
    cout << "NAME\tAGE\tLEVEL\tKILLS\tWINS\tTOTAL GAMES\tWIN RATE" << endl;
    for (int i = 0; i < limit; i++)
    {
        cout << arr_player_name[i] << "\t" << arr_player_age[i] << "\t" << arr_player_level[i] << "\t " << arr_player_kills[i] << "\t  " << arr_player_win_count[i] << " \t " << arr_player_total_games[i] << "  \t\t" << arr_player_win_rate[i] << "%" << endl;
    }
}

void captainMenu()
{
    int captain_choice = 0;
    while (captain_choice != 9)
    {
        cout << "\n1: VIEW PLAYERS\n2: SEARCH PLAYER\n3: DELETE PLAYER\n4: UPDATE LIST\n5: SORT BY WINS\n6: SORT BY LEVEL\n7: SORT BY WIN RATE\n8: TOP 3 PLAYERS\n9: EXIT" << endl;
        cout << "SELECT THE OPTION:";
        cin >> captain_choice;
        system("cls");

        if (captain_choice == 1)
        {
            cout << "              <<<VIEW PLAYER>>>" << endl;
            displayList(a);
            pause();
        }
        else if (captain_choice == 2)
        {
            cout << "WHAT NAME YOU WANT TO SEACH:";
            string search_name;
            cin >> search_name;
            bool isfound = false;
            for (int i = 0; i < a; i++)
            {
                if (search_name == arr_player_name[i])
                {
                    displayList(1); // Modified logic to show just the found one
                    isfound = true;
                    break;
                }
            }
            if (!isfound)
                cout << "USER NOT FOUND..." << endl;
            pause();
        }
        else if (captain_choice == 3)
        {
            cout << "WHAT NAME YOU WANT TO DELETE:";
            string search_name;
            cin >> search_name;
            bool isfound = false;
            for (int i = 0; i < a; i++)
            {
                if (search_name == arr_player_name[i])
                {
                    for (int j = i; j < a - 1; j++)
                    {
                        arr_player_name[j] = arr_player_name[j + 1];
                        arr_player_age[j] = arr_player_age[j + 1];
                        arr_player_level[j] = arr_player_level[j + 1];
                        arr_player_kills[j] = arr_player_kills[j + 1];
                        arr_player_win_count[j] = arr_player_win_count[j + 1];
                        arr_player_total_games[j] = arr_player_total_games[j + 1];
                        arr_player_win_rate[j] = arr_player_win_rate[j + 1];
                    }
                    a--;
                    isfound = true;
                    break;
                }
            }
            if (isfound)
                cout << search_name << " DELETED." << endl;
            else
                cout << "USER NOT FOUND." << endl;
            pause();
        }
        else if (captain_choice >= 5 && captain_choice <= 8)
        {
            sorting(captain_choice);
            if (captain_choice == 8)
            {
                cout << "              <<< TOP 3 PLAYERS >>>" << endl;
                displayList(a < 3 ? a : 3);
            }
            else
            {
                cout << "              <<< SORTED LIST >>>" << endl;
                displayList(a);
            }
            pause();
        }
        else if (captain_choice == 9)
        {
            // Exit logic
        }
        else
        {
            cout << "WRONG INPUT......" << endl;
            pause();
        }
    }
}

void playerMenu()
{
    cout << "                <<< WELCOME PLAYER >>>             " << endl
         << endl;
    cout << "ENTER NAME:";
    cin >> arr_player_name[a];
    cout << "ENTER AGE:";
    cin >> arr_player_age[a];
    cout << "ENTER YOUR LEVEL:";
    cin >> arr_player_level[a];
    cout << "ENTER YOUR TOTAL KILLS:";
    cin >> arr_player_kills[a];
    cout << "ENTER YOUR WINS:";
    cin >> arr_player_win_count[a];
    arr_player_total_games[a] = 5.0;
    arr_player_win_rate[a] = (arr_player_win_count[a] / 5.0) * 100;
    a++;
    cout << endl
         << "                YOU ARE REGISTERED AS A PLAYER" << endl;
    pause();
}

void sorting(int sort)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = i + 1; j < a; j++)
        {
            bool condition = false;
            if (sort == 5)
            {
                condition = (arr_player_win_count[i] < arr_player_win_count[j]);
            }
            else if (sort == 6)
            {
                condition = (arr_player_level[i] < arr_player_level[j]);
            }
            else if (sort == 7)
            {
                condition = (arr_player_win_rate[i] < arr_player_win_rate[j]);
            }
            else if (sort == 8)
            {
                float score_j = (arr_player_win_count[j] * 50/100) + (arr_player_kills[j] * 30/100) + (arr_player_level[j] * 20/100);
                float score_i = (arr_player_win_count[i] * 50/100) + (arr_player_kills[i] * 30/100) + (arr_player_level[i] * 20/100);
                condition = (score_i < score_j);
            }

            if (condition)
            {
                int swap_lvl = arr_player_level[i];
                arr_player_level[i] = arr_player_level[j];
                arr_player_level[j] = swap_lvl;

                string temp_Name = arr_player_name[i];
                arr_player_name[i] = arr_player_name[j];
                arr_player_name[j] = temp_Name;

                int temp_age = arr_player_age[i];
                arr_player_age[i] = arr_player_age[j];
                arr_player_age[j] = temp_age;

                int temp_kills = arr_player_kills[i];
                arr_player_kills[i] = arr_player_kills[j];
                arr_player_kills[j] = temp_kills;

                float temp_wins = arr_player_win_count[i];
                arr_player_win_count[i] = arr_player_win_count[j];
                arr_player_win_count[j] = temp_wins;

                float temp_total_games = arr_player_total_games[i];
                arr_player_total_games[i] = arr_player_total_games[j];
                arr_player_total_games[j] = temp_total_games;

                float temp_wins_rate = arr_player_win_rate[i];
                arr_player_win_rate[i] = arr_player_win_rate[j];
                arr_player_win_rate[j] = temp_wins_rate;
            }
        }
    }
}