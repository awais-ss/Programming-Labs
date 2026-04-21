#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    system("cls");
    cout << "          =========================================" << endl;
    cout << "          <<               WELCOME               >>" << endl;
    cout << "          =========================================" << endl
         << endl;

    int a = 5;
    int user_choice;
    int players_number;
    string arr_player_name[1000] = {"ALI", "HAMAD", "SAIM", "ASHRAF", "HAIDER"};
    int arr_player_age[1000] = {18, 19, 20, 19, 19};
    int arr_player_level[1000] = {55, 75, 62, 69, 67};
    int arr_player_kills[1000] = {40, 55, 64, 46, 59};
    float arr_player_total_games[1000] = {5, 5, 5, 5, 5};
    float arr_player_win_count[1000] = {2, 4, 4, 3, 5};
    float arr_player_win_rate[1000];
    for (int i = 0; i < a; i++)
    {
        arr_player_win_rate[i] = (arr_player_win_count[i] / 5) * 100;
    }
    while (user_choice != 3)
    {
        cout << "SELECT THE OPTION " << endl;
        cout << "1: CAPTAIN" << endl;
        cout << "2: PLAYER" << endl;
        cout << "3: EXIT" << endl
             << endl;

        cout << "ENTER YOUR CHOICE:";
        cin >> user_choice;
        system("cls");
        while (user_choice != 3)
        {
            if (user_choice == 1)
            {
                system("cls");
                cout << endl
                     << "                <<< WELCOME CAPTAIN >>>             " << endl
                     << endl;
                // captain's code
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

                        cout << "1: VIEW PLAYERS" << endl;
                        cout << "2: SEARCH PLAYER" << endl;
                        cout << "3: DELETE PLAYER" << endl;
                        cout << "4: UPDATE LIST" << endl;
                        cout << "5: SORT BY WINS" << endl;
                        cout << "6: SORT BY LEVEL" << endl;
                        cout << "7: SORT BY WIN RATE" << endl;
                        cout << "8: TOP 3 PLAYERS" << endl;
                        cout << "9: EXIT" << endl;
                        int captain_choice;
                        cout << "SELECT THE OPTION:";
                        cin >> captain_choice;
                        while (captain_choice != 9)
                        {
                            system("cls");
                            if (captain_choice == 1)
                            {
                                cout << "              <<<VIEW PLAYER>>>" << endl;
                                cout << "NAME\tAGE\tLEVEL\tKILLS\tWINS\tTOTAL GAMES\tWIN RATE" << endl;
                                for (int i = 0; i < a; i++)
                                {
                                    arr_player_win_rate[i] = arr_player_win_count[i] / 5 * 100;
                                    cout << arr_player_name[i] << "\t"
                                         << arr_player_age[i] << "\t"
                                         << arr_player_level[i] << "\t "
                                         << arr_player_kills[i] << "\t  "
                                         << arr_player_win_count[i] << " \t "
                                         << arr_player_total_games[i] << "  \t\t"
                                         << arr_player_win_rate[i] << "%"
                                         << endl
                                         << endl;
                                }
                                cout << "\nPRESS ANY KEY TO CONTINUE......" << endl;
                                getch();
                                system("cls");
                            }
                            else if (captain_choice == 2)
                            {
                                cout << "           <<<SEARCH PLAYER>>>" << endl;
                                cout << "WHAT NAME YOU WANT TO SEACH:";
                                string search_name;
                                cin >> search_name;
                                bool isfound = false;
                                int index = 0;
                                for (int i = 0; i < a; i++)
                                {
                                    if (search_name == arr_player_name[i])
                                    {
                                        index = i;
                                        isfound = true;
                                        break;
                                    }
                                }

                                if (isfound)
                                {
                                    cout << "NAME\tAGE\tLEVEL\tKILLS\tWINS\tTOTAL GAMES\tWIN RATE" << endl;
                                    cout << arr_player_name[index] << "\t"
                                         << arr_player_age[index] << "\t"
                                         << arr_player_level[index] << "\t"
                                         << arr_player_kills[index] << "\t"
                                         << arr_player_win_count[index] << "\t "
                                         << arr_player_total_games[index] << "\t"
                                         << arr_player_win_rate[index]
                                         << endl
                                         << endl;
                                    cout << "\nPRESS ANY KEY TO CONTINUE......" << endl;
                                    getch();
                                    system("cls");
                                }
                                else
                                {
                                    cout << "USER NOT FOUND..." << endl;
                                }
                                // break;
                            }

                            else if (captain_choice == 3)
                            {
                                system("cls");
                                cout << "           <<<DELETE PLAYER>>>" << endl
                                     << endl;
                                cout << "WHAT NAME YOU WANT TO DELETE:";
                                string search_name;
                                cin >> search_name;
                                bool isfound = false;
                                int index = 0;
                                for (int i = 0; i < a; i++)
                                {
                                    if (search_name == arr_player_name[i])
                                    {
                                        index = i;
                                        isfound = true;
                                        break;
                                    }
                                }

                                if (isfound)
                                {

                                    for (int i = index; i < a - 1; i++)
                                    {
                                        arr_player_name[i] = arr_player_name[i + 1];
                                        arr_player_age[i] = arr_player_age[i + 1];
                                        arr_player_level[i] = arr_player_level[i + 1];
                                        arr_player_kills[i] = arr_player_kills[i + 1];
                                        arr_player_win_count[i] = arr_player_win_count[i + 1];
                                        arr_player_total_games[i] = arr_player_total_games[i + 1];
                                        arr_player_win_rate[i] = arr_player_win_rate[i + 1];
                                    }

                                    a--;
                                    cout << endl
                                         << search_name << "'s DATA HAS BEEN DELETED" << endl
                                         << endl;
                                    cout << "PRESS ANY KEY TO CONTINUE......" << endl;
                                }
                                else
                                {
                                    cout << "USER NOT FOUND..." << endl;
                                    cout << "PRESS ANY KEY TO CONTINUE......" << endl;
                                }
                                getch();
                                system("cls");
                            }
                            else if (captain_choice == 4)
                            {
                                cout << "           <<<UPDATE LIST>>>" << endl;
                                cout << "WHAT NAME YOU WANT TO UPDATD:";
                                string search_name;
                                cin >> search_name;
                                bool isfound = false;
                                int index = 0;
                                for (int i = 0; i < a; i++)
                                {
                                    if (search_name == arr_player_name[i])
                                    {
                                        index = i;
                                        isfound = true;
                                        break;
                                    }
                                }
                                if (isfound)
                                {
                                    // cout << "NAME\tAGE\tLEVEL\tKILLS\tWINS\tTOTAL GAMES\t" << endl;
                                    cout << "ENTER NAME:";
                                    cin >> arr_player_name[index];
                                    cout << "ENTER AGE:";
                                    cin >> arr_player_age[index];
                                    cout << "ENTER YOUR LEVEL:";
                                    cin >> arr_player_level[index];
                                    cout << "ENTER YOUR TOTAL KILLS:";
                                    cin >> arr_player_kills[index];
                                    cout << "ENTER YOUR WINS:";
                                    cin >> arr_player_win_count[index];
                                    arr_player_total_games[index] = 5;
                                    cout << "\nPRESS ANY KEY TO CONTINUE......" << endl;
                                    getch();
                                    system("cls");
                                }
                                else
                                {
                                    cout << "USER NOT FOUND..." << endl;
                                    cout << "\nPRESS ANY KEY TO CONTINUE......" << endl;
                                    getch();
                                    system("cls");
                                }
                            }
                            else if (captain_choice == 5)
                            {
                                system("cls");
                                cout << "        <<<SORT BY WINS>>>" << endl
                                     << endl;
                                for (int i = 0; i < a; i++)
                                {
                                    for (int j = i + 1; j < a; j++)
                                    {
                                        if (arr_player_win_count[i] < arr_player_win_count[j])
                                        {
                                            // swap lvl
                                            int swap_lvl;
                                            swap_lvl = arr_player_level[i];
                                            arr_player_level[i] = arr_player_level[j];
                                            arr_player_level[j] = swap_lvl;

                                            // swap name
                                            string temp_Name = arr_player_name[i];
                                            arr_player_name[i] = arr_player_name[j];
                                            arr_player_name[j] = temp_Name;
                                            // swap age
                                            int temp_age = arr_player_age[i];
                                            arr_player_age[i] = arr_player_age[j];
                                            arr_player_age[j] = temp_age;
                                            // swap kill
                                            int temp_kills = arr_player_kills[i];
                                            arr_player_kills[i] = arr_player_kills[j];
                                            arr_player_kills[j] = temp_kills;
                                            // Swap wins
                                            float temp_wins = arr_player_win_count[i];
                                            arr_player_win_count[i] = arr_player_win_count[j];
                                            arr_player_win_count[j] = temp_wins;
                                            // swap winrate
                                            float temp_wins_rate = arr_player_win_rate[i];
                                            arr_player_win_rate[i] = arr_player_win_rate[j];
                                            arr_player_win_rate[j] = temp_wins_rate;
                                        }
                                    }
                                }
                                cout << "NAME\tAGE\tLEVEL\tKILLS\tWINS\tTOTAL GAMES\t" << endl;
                                for (int i = 0; i < a; i++)
                                {
                                    cout << arr_player_name[i] << "\t"
                                         << arr_player_age[i] << "\t"
                                         << arr_player_level[i] << "\t"
                                         << arr_player_kills[i] << "\t"
                                         << arr_player_win_count[i] << "\t "
                                         << arr_player_total_games[i] << "\t"
                                         // << arr_player_win_rate
                                         << endl
                                         << endl;
                                }
                                cout << "\nPRESS ANY KEY TO CONTINUE......" << endl;
                                getch();
                                system("cls");
                            }
                            else if (captain_choice == 6)
                            {
                                system("cls");
                                cout << "        <<<SORT BY LEVEL>>>" << endl
                                     << endl;
                                for (int i = 0; i < a; i++)
                                {
                                    for (int j = i + 1; j < a; j++)
                                    {
                                        if (arr_player_level[i] < arr_player_level[j])
                                        {
                                            // swap lvl
                                            int swap_lvl;
                                            swap_lvl = arr_player_level[i];
                                            arr_player_level[i] = arr_player_level[j];
                                            arr_player_level[j] = swap_lvl;

                                            // swap name
                                            string temp_Name = arr_player_name[i];
                                            arr_player_name[i] = arr_player_name[j];
                                            arr_player_name[j] = temp_Name;
                                            // swap age
                                            int temp_age = arr_player_age[i];
                                            arr_player_age[i] = arr_player_age[j];
                                            arr_player_age[j] = temp_age;
                                            // swap kill
                                            int temp_kills = arr_player_kills[i];
                                            arr_player_kills[i] = arr_player_kills[j];
                                            arr_player_kills[j] = temp_kills;
                                            // Swap wins
                                            float temp_wins = arr_player_win_count[i];
                                            arr_player_win_count[i] = arr_player_win_count[j];
                                            arr_player_win_count[j] = temp_wins;
                                            // swap winrate
                                            float temp_wins_rate = arr_player_win_rate[i];
                                            arr_player_win_rate[i] = arr_player_win_rate[j];
                                            arr_player_win_rate[j] = temp_wins_rate;
                                        }
                                    }
                                }
                                cout << "NAME\tAGE\tLEVEL\tKILLS\tWINS\tTOTAL GAMES\t" << endl;
                                for (int i = 0; i < a; i++)
                                {
                                    cout << arr_player_name[i] << "\t"
                                         << arr_player_age[i] << "\t"
                                         << arr_player_level[i] << "\t"
                                         << arr_player_kills[i] << "\t"
                                         << arr_player_win_count[i] << "\t "
                                         << arr_player_total_games[i] << "\t"
                                         << arr_player_win_rate[i] << "%"
                                         << endl
                                         << endl;
                                }
                                cout << "\nPRESS ANY KEY TO CONTINUE......" << endl;
                                getch();
                                system("cls");
                            }
                            else if (captain_choice == 7)
                            {
                                cout << "           SORT BY WIN RATE" << endl
                                     << endl;

                                for (int i = 0; i < a; i++)
                                {
                                    for (int j = i + 1; j < a; j++)
                                    {
                                        if (arr_player_win_rate[i] < arr_player_win_rate[j])
                                        {
                                            // swap lvl
                                            int swap_lvl;
                                            swap_lvl = arr_player_level[i];
                                            arr_player_level[i] = arr_player_level[j];
                                            arr_player_level[j] = swap_lvl;

                                            // swap name
                                            string temp_Name = arr_player_name[i];
                                            arr_player_name[i] = arr_player_name[j];
                                            arr_player_name[j] = temp_Name;
                                            // swap age
                                            int temp_age = arr_player_age[i];
                                            arr_player_age[i] = arr_player_age[j];
                                            arr_player_age[j] = temp_age;
                                            // swap kill
                                            int temp_kills = arr_player_kills[i];
                                            arr_player_kills[i] = arr_player_kills[j];
                                            arr_player_kills[j] = temp_kills;
                                            // Swap wins
                                            float temp_wins = arr_player_win_count[i];
                                            arr_player_win_count[i] = arr_player_win_count[j];
                                            arr_player_win_count[j] = temp_wins;
                                            // swap winrate
                                            float temp_wins_rate = arr_player_win_rate[i];
                                            arr_player_win_rate[i] = arr_player_win_rate[j];
                                            arr_player_win_rate[j] = temp_wins_rate;
                                        }
                                    }
                                }
                                cout << "NAME\tAGE\tLEVEL\tKILLS\tWINS\tTOTAL GAMES\tWIN RATE" << endl;
                                for (int i = 0; i < a; i++)
                                {
                                    cout << arr_player_name[i] << "\t"
                                         << arr_player_age[i] << "\t"
                                         << arr_player_level[i] << "\t"
                                         << arr_player_kills[i] << "\t"
                                         << arr_player_win_count[i] << "\t "
                                         << arr_player_total_games[i] << "\t"
                                         << arr_player_win_rate[i] << "%"
                                         << endl
                                         << endl;
                                }
                                cout << "\nPRESS ANY KEY TO CONTINUE......" << endl;
                                getch();
                                system("cls");
                            }
                            else if (captain_choice == 8)
                            {
                                cout << "                 <<<<TOP 3 ARE>>>>" << endl;
                                for (int i = 0; i < a; i++)
                                {
                                    for (int j = i + 1; j < a; j++)
                                    {
                                        float score_i = (arr_player_win_count[i] * 5.0) + (arr_player_kills[i] * 0.3) + (arr_player_level[i] * 0.2);
                                        float score_j = (arr_player_win_count[j] * 5.0) + (arr_player_kills[j] * 0.3) + (arr_player_level[j] * 0.2);
                                        if (score_i < score_j)
                                        {
                                            // swap lvl
                                            int swap_lvl;
                                            swap_lvl = arr_player_level[i];
                                            arr_player_level[i] = arr_player_level[j];
                                            arr_player_level[j] = swap_lvl;

                                            // swap name
                                            string temp_Name = arr_player_name[i];
                                            arr_player_name[i] = arr_player_name[j];
                                            arr_player_name[j] = temp_Name;
                                            // swap age
                                            int temp_age = arr_player_age[i];
                                            arr_player_age[i] = arr_player_age[j];
                                            arr_player_age[j] = temp_age;
                                            // swap kill
                                            int temp_kills = arr_player_kills[i];
                                            arr_player_kills[i] = arr_player_kills[j];
                                            arr_player_kills[j] = temp_kills;
                                            // Swap wins
                                            float temp_wins = arr_player_win_count[i];
                                            arr_player_win_count[i] = arr_player_win_count[j];
                                            arr_player_win_count[j] = temp_wins;
                                            // swap winrate
                                            float temp_wins_rate = arr_player_win_rate[i];
                                            arr_player_win_rate[i] = arr_player_win_rate[j];
                                            arr_player_win_rate[j] = temp_wins_rate;
                                        }
                                    }
                                }
                                cout << "NAME\tAGE\tLEVEL\tKILLS\tWINS\tTOTAL GAMES\tWIN RATE" << endl;
                                for (int i = 0; i < 3; i++)
                                {
                                    cout << arr_player_name[i] << "\t"
                                         << arr_player_age[i] << "\t"
                                         << arr_player_level[i] << "\t"
                                         << arr_player_kills[i] << "\t"
                                         << arr_player_win_count[i] << "\t "
                                         << arr_player_total_games[i] << "\t\t"
                                         << arr_player_win_rate[i] << "%"
                                         << endl
                                         << endl;
                                }
                                cout << "\nPRESS ANY KEY TO CONTINUE......" << endl;
                                getch();
                                system("cls");
                            }

                            else if (captain_choice == 9)
                            {
                                cout << "              EXIT" << endl
                                     << endl
                                     << endl;
                            }
                            else
                            {
                                cout << "              WRONG INPUT" << endl;
                            }
                            cout << "1: VIEW PLAYERS" << endl;
                            cout << "2: SEARCH PLAYER" << endl;
                            cout << "3: DELETE PLAYER" << endl;
                            cout << "4: UPDATE LIST" << endl;
                            cout << "5: SORT BY WINS" << endl;
                            cout << "6: SORT BY LEVEL" << endl;
                            cout << "7: SORT BY WIN RATE" << endl;
                            cout << "8: TOP 3 PLAYERS" << endl;
                            cout << "9: EXIT" << endl;
                            cout << "SELECT THE OPTION:";
                            cin >> captain_choice;
                        }

                        break;
                    }
                    if (i == 0 || i == 1)
                    {
                        cout << "                      TRY AGAIN" << endl;
                    }
                    else
                    {
                        cout << "                   TOO MANY ATTTEMPTS" << endl;
                        cout << "                     LOGIN FAILED! " << endl;
                    }
                }
                break;
            }
            else if (user_choice == 2)
            {
                /*player's code*/
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
                // cout << "ENTER YOUR TOTAL GAMES (MUST 5):";
                // cin >>
                arr_player_total_games[a] = 5;
                for (int i = 0; i < a; i++)
                {
                    arr_player_win_rate[a] = (arr_player_win_count[a] / arr_player_total_games[a]) * 100;
                }
                a++;
                cout << endl
                     << "                YOU ARE REGISTERED AS A PLAYER" << endl;
                cout << "PRESS ANY KEY TO CONTINUE..." << endl;
                getch();
                system("cls");
                cout << "SELECT THE OPTION " << endl;
                cout << "1: CAPTAIN" << endl;
                cout << "2: PLAYER" << endl;
                cout << "3: EXIT" << endl
                     << endl;

                cout << "ENTER YOUR CHOICE:";
                cin >> user_choice;
            }
            else if (user_choice == 3)
            {
                cout << "                      .....LOGOUT.....";
            }
            else
            {
                cout << "                      .....WRONG INPUT....." << endl;
                break;
            }
        }
    }
}
