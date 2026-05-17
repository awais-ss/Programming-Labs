#include <iostream>
#include <conio.h>
#include <fstream>
#include <string>
using namespace std;

//==========PROTOTYPE START==============
void sorting(int sort);
void CAP_MENU();
void PLAYER_MENU();
bool login();
void pause();
void DISPLAY_PLAYERS(int idx);
void add_to_file();
void delete_from_file();
void show_from_file();
//==========PROTOTYPE END================

//==========DATA STRUCTURE START=========
int a = 0; // file se load hoga
int user_choice;
string arr_player_name[1000];
int arr_player_age[1000];
int arr_player_level[1000];
int arr_player_kills[1000];
float arr_player_total_games[1000];
float arr_player_win_count[1000];
float arr_player_win_rate[1000];
//==========DATA STRUCTURE END===========

int main()
{
    system("cls");
    show_from_file();
    cout << "          =========================================" << endl;
    cout << "          <<               WELCOME               >>" << endl;
    cout << "          =========================================" << endl
         << endl;

    //  win_rate file se load hoti hai show_from_file mein
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
                CAP_MENU();
            }
        }
        else if (user_choice == 2)
        {
            PLAYER_MENU();
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

void add_to_file()
{
    fstream AddToFile;
    AddToFile.open("PLAYERS-DB.txt", ios::app);
    if (AddToFile.is_open())
    {
        AddToFile << arr_player_name[a] << ","
                  << arr_player_age[a] << ","
                  << arr_player_level[a] << ","
                  << arr_player_kills[a] << ","
                  << arr_player_win_count[a] << ","
                  << arr_player_total_games[a] << ","
                  << arr_player_win_rate[a] << "\n";
        AddToFile.close();
    }
}
void delete_from_file()
{
    fstream delete_data_from_file;
    delete_data_from_file.open("PLAYERS-DB.txt", ios::out);
    if (delete_data_from_file.is_open())
    {
        for (int i = 0; i < a; i++)
        {
            delete_data_from_file << arr_player_name[i] << ","
                                  << arr_player_age[i] << ","
                                  << arr_player_level[i] << ","
                                  << arr_player_kills[i] << ","
                                  << arr_player_win_count[i] << ","
                                  << arr_player_total_games[i] << ","
                                  << arr_player_win_rate[i] << "\n";
        }
        delete_data_from_file.close();
    }
}
void show_from_file()
{
    string line;
    fstream Show_FromFile;
    Show_FromFile.open("PLAYERS-DB.txt", ios::in);
    if (Show_FromFile.is_open())
    {
        a = 0;
        while (getline(Show_FromFile, line))
        {
            if (line.empty())
                continue;

            string fields[7];
            string temp = "";
            int index = 0;

            for (int i = 0; i <= line.length(); i++)
            {
                if (line[i] == ',' || i == line.length())
                {
                    fields[index] = temp;
                    temp = "";
                    index++;
                }
                else
                {
                    temp += line[i];
                }
            }
            arr_player_name[a] = fields[0];
            arr_player_age[a] = stoi(fields[1]);
            arr_player_level[a] = stoi(fields[2]);
            arr_player_kills[a] = stoi(fields[3]);
            arr_player_win_count[a] = stof(fields[4]);
            arr_player_total_games[a] = stof(fields[5]);
            arr_player_win_rate[a] = stof(fields[6]);

            a++;
        }
        Show_FromFile.close();
    }
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

void DISPLAY_PLAYERS(int idx)
{
    cout << "NAME\tAGE\tLEVEL\tKILLS\tWINS\tTOTAL GAMES\tWIN RATE" << endl;
    for (int i = 0; i < idx; i++)
    {
        cout << arr_player_name[i] << "\t" << arr_player_age[i] << "\t" << arr_player_level[i] << "\t " << arr_player_kills[i] << "\t  " << arr_player_win_count[i] << " \t " << arr_player_total_games[i] << "  \t\t" << arr_player_win_rate[i] << "%" << endl;
    }
}

void CAP_MENU()
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
            DISPLAY_PLAYERS(a);
            pause();
        }
        else if (captain_choice == 2)
        {
            int indexx = -1;
            cout << "WHAT NAME YOU WANT TO SEACH:";
            string search_name;
            cin >> search_name;
            bool isfound = false;
            for (int i = 0; i < a; i++)
            {
                if (search_name == arr_player_name[i])
                {
                    indexx = i;
                    isfound = true;
                    break;
                }
            }
            cout << "NAME\tAGE\tLEVEL\tKILLS\tWINS\tTOTAL GAMES\tWIN RATE" << endl;
            cout << arr_player_name[indexx] << "\t" << arr_player_age[indexx] << "\t" << arr_player_level[indexx] << "\t " << arr_player_kills[indexx] << "\t  " << arr_player_win_count[indexx] << " \t " << arr_player_total_games[indexx] << "  \t\t" << arr_player_win_rate[indexx] << "%" << endl;

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
                    delete_from_file();
                    break;
                }
            }
            if (isfound)
                cout << search_name << " DELETED." << endl;
            else
                cout << "USER NOT FOUND." << endl;
            pause();
        }
        else if (captain_choice == 4)
        {
            cout << "ENTER NAME TO UPDATE:";
            string search_name;
            cin >> search_name;
            bool isfound = false;
            for (int i = 0; i < a; i++)
            {
                if (search_name == arr_player_name[i])
                {
                    cout<<"ENTER NAME:";
                    cin >>arr_player_name[i];
                    cout<<"ENTER AGE:";
                    cin >>arr_player_age[i];
                    cout << "ENTER NEW LEVEL:";
                    cin >> arr_player_level[i];
                    cout << "ENTER NEW KILLS:";
                    cin >> arr_player_kills[i];
                    cout << "ENTER NEW WINS:";
                    cin >> arr_player_win_count[i];
                    arr_player_win_rate[i] = (arr_player_win_count[i] / arr_player_total_games[i]) * 100;
                    isfound = true;
                    delete_from_file();
                    break;
                }
            }
            if (isfound)
                cout << search_name << " UPDATED." << endl;
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
                DISPLAY_PLAYERS(a < 3 ? a : 3);
            }
            else
            {
                cout << "              <<< SORTED LIST >>>" << endl;
                DISPLAY_PLAYERS(a);
            }
            pause();
        }
        else if (captain_choice == 9)
        {
            // exit
            cout << "LOGOUT" << endl;
            pause();
            break;
        }
        else
        {
            cout << "WRONG INPUT......" << endl;
            pause();
        }
    }
}

void PLAYER_MENU()
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
    add_to_file();
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
                float score_j = (arr_player_win_count[j] * 50 / 100) + (arr_player_kills[j] * 30 / 100) + (arr_player_level[j] * 20 / 100);
                float score_i = (arr_player_win_count[i] * 50 / 100) + (arr_player_kills[i] * 30 / 100) + (arr_player_level[i] * 20 / 100);
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