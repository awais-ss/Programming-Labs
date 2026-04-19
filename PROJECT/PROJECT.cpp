#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int students_number = 1000;
    int index = 6;
    string name_arr[students_number] = {"AWAIS", "ALI", "AHMAD", "SAMI", "TAHA", "FAIQ"};
    float age_arr[students_number] = {19, 19, 19, 19, 19, 19};
    float matric_arr[students_number] = {1000, 1050, 1001, 1010, 1020, 1030};
    float inter_arr[students_number] = {1050, 1000, 1060, 1050, 1020, 100};
    float ecat1_arr[students_number] = {280, 290, 300, 310, 320, 330};
    float ecat2_arr[students_number] = {290, 280, 330, 320, 310, 300};
    string pref1_arr[students_number] = {"CS", "EE", "CS", "SE", "CS", "EE"};
    string pref2_arr[students_number] = {"SE", "CS", "SE", "CS", "SE", "CS"};
    string pref3_arr[students_number] = {"EE", "SE", "EE", "EE", "EE", "SE"};
    float aggre_arr[students_number];
    // float aggregate_arr[students_number]={,};
    int attempt = 0;
    system("cls");
    while (true)
    {
        system("cls");
        cout << "=========================================================" << endl;
        cout << "          UNIVERSITY ADMISSION MANAGEMENT SYSTEM         " << endl;
        cout << "=========================================================" << endl
             << endl;
        cout << "                      USER MENU\n";

        cout << "1: ADMIN " << endl;
        cout << "2: STUDENT" << endl;
        cout << "3: EXIT" << endl;
        cout << "CHOOSE OPTION:";
        int option;
        cin >> option;
        cout << endl;
        if (option == 1)
        {
            // admin menu
            cout << "                WELCOME TO ADMIN MENU" << endl;
            cout << "              --------------------------" << endl;
            for (int i = 0; i < 3; i++)
            {
                cout << "            ============ATTEMPT " << i + 1 << "============" << endl;
                string username;
                string password;
                cout << "ENTER USERNAME:";
                cin >> username;
                cout << "ENTER PASSWORD:";
                cin >> password;
                if (username == "admin" && password == "1234")
                {
                    cout << endl
                         << "                 LOGIN SUCCESSFULLY" << endl;
                    cout << endl
                         << "PRESSS ANY KEY TO CONTINUE...";
                    getch();
                    while (true)
                    {
                        system("cls");
                        cout << "1: SHOW ALL STUDENTS" << endl;
                        cout << "2: SEARCH STUDENTS" << endl;
                        cout << "3: UPDATE STUDENY RECORD" << endl;
                        cout << "4: GENERATE MERIT LIST" << endl;
                        cout << "5: DELETE RECORD BY NAME" << endl;
                        cout << "6: LOGOUT" << endl;
                        cout << "ENTER YOUR CHOICE:";
                        int choice;
                        cin >> choice;
                        if (choice == 1)
                        { // shows record
                            cout << "NAME\tAGE\tMATRIC\tINTER\tECAT1\tECAT2\tPRE-1\tPREF-2\tPREF-3" << endl;
                            cout << "----\t---\t------\t-----\t-----\t-----\t-----\t------\t------" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (name_arr[i] != "")
                                {
                                    cout << name_arr[i] << "\t"
                                         << age_arr[i] << "\t"
                                         << matric_arr[i] << "\t"
                                         << inter_arr[i] << "\t"
                                         << ecat1_arr[i] << "\t"
                                         << ecat2_arr[i] << "\t"
                                         << pref1_arr[i] << "\t"
                                         << pref2_arr[i] << "\t"
                                         << pref3_arr[i] << endl;
                                }
                            }
                            cout << endl
                                 << "PRESSS ANY KEY TO CONTINUE...";
                            getch();
                        }
                        else if (choice == 2)
                        {
                            // searxch students
                            cout << "ENTER THE NAME YOU WANT TO SEARCH:";
                            string search_name;
                            cin >> search_name;
                            bool found = false;
                            int found_index = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (name_arr[i] == search_name)
                                {
                                    found_index = i;
                                    found = true;
                                }
                            }
                            if (found == false)
                            {
                                cout << "NO REACORD FOUND AGAINTS " << search_name;
                            }
                            else
                            {
                                cout << "NAME\tAGE\tMATRIC\tINTER\tECAT1\tECAT2\tPRE-1\tPREF-2\tPREF-3" << endl;
                                cout << "----\t---\t------\t-----\t-----\t-----\t-----\t------\t------" << endl;
                                cout << name_arr[found_index] << "\t"
                                     << age_arr[found_index] << "\t"
                                     << matric_arr[found_index] << "\t"
                                     << inter_arr[found_index] << "\t"
                                     << ecat1_arr[found_index] << "\t"
                                     << ecat2_arr[found_index] << "\t"
                                     << pref1_arr[found_index] << "\t"
                                     << pref2_arr[found_index] << "\t"
                                     << pref3_arr[found_index] << endl;
                            }
                            cout << "PRESSS ANY KEY TO CONTINUE...";
                            getch();
                        }
                        else if (choice == 3)
                        {
                            // update record
                            cout << "ENTER THE NAME YOU WANT TO UPDATE:";
                            string search_name;
                            cin >> search_name;
                            bool found = false;
                            int found_index = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (name_arr[i] == search_name)
                                {
                                    found_index = i;
                                    found = true;
                                }
                            }
                            if (found == true)
                            {
                                cout << "=======PREVIOUS RECORD======" << endl;
                                cout << "NAME\tAGE\tMATRIC\tINTER\tECAT1\tECAT2\tPRE-1\tPREF-2\tPREF-3" << endl;
                                cout << "----\t---\t------\t-----\t-----\t-----\t-----\t------\t------" << endl;
                                cout << name_arr[found_index] << "\t"
                                     << age_arr[found_index] << "\t"
                                     << matric_arr[found_index] << "\t"
                                     << inter_arr[found_index] << "\t"
                                     << ecat1_arr[found_index] << "\t"
                                     << ecat2_arr[found_index] << "\t"
                                     << pref1_arr[found_index] << "\t"
                                     << pref2_arr[found_index] << "\t"
                                     << pref3_arr[found_index] << endl
                                     << endl;
                                cout << "ENTER NEW RECORD FOR UPDATE" << endl;
                                string name;
                                int age;
                                int matric_marks;
                                int inter_marks;
                                int ecat1_marks;
                                int ecat2_marks;
                                string pref1;
                                string pref2;
                                string pref3;
                                float aggregate;
                                cout << "ENTER YOUR NAME:";
                                cin >> name;
                                cout << "ENTER YOUR AGE:";
                                cin >> age;
                                cout << "ENTER YOUR MATRIC MARKS:";
                                cin >> matric_marks;
                                cout << "ENTER YOUR INTER MARKS:";
                                cin >> inter_marks;
                                cout << "ENTER YOUR ECAT TEST 1 MARKS:";
                                cin >> ecat1_marks;
                                cout << "ENTER YOUR ECAT TEST 2 MARKS:";
                                cin >> ecat2_marks;
                                cout << endl;
                                cout << "                 CHOOSE CS , SE , EE AS PREFERENCE:" << endl;
                                cout << "               --------------------------------------" << endl;
                                cout << "ENTER YOUR 1 PREFERENCE:";
                                cin >> pref1;
                                cout << "ENTER YOUR 2 PREFERENCE:";
                                cin >> pref2;
                                cout << "ENTER YOUR 3 PREFERENCE:";
                                cin >> pref3;
                                name_arr[found_index] = name;
                                age_arr[found_index] = age;
                                matric_arr[found_index] = matric_marks;
                                inter_arr[found_index] = inter_marks;
                                ecat1_arr[found_index] = ecat1_marks;
                                ecat2_arr[found_index] = ecat2_marks;
                                pref1_arr[found_index] = pref1;
                                pref2_arr[found_index] = pref2;
                                pref3_arr[found_index] = pref3;
                            }
                            else
                            {
                                cout << "NO REACORD FOUND AGAINTS " << search_name;
                            }
                            cout << "PRESSS ANY KEY TO CONTINUE...";
                            getch();
                        }
                        else if (choice == 4)
                        {
                            // generate merit list
                            float aggregate = matric_arr[i] / 1050 * 100 * 0.30 + inter_arr[i] / 1100 * 100 * .40 + (ecat1_arr[i] / 400 * 100 * 0.30);
                            aggre_arr[i] = aggregate;
                            // code to display all data with aggre
                            cout << "NAME\tAGE\tAGGREGATE" << endl;
                            cout << "----\t---\t------\t-----\t-----\t-----\t-----\t------\t------" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (name_arr[i] != "")
                                {
                                    cout << name_arr[i] << "\t"
                                         << age_arr[i] << "\t"
                                         << aggre_arr[i] << endl;
                                }
                            }
                            cout << endl
                                 << "PRESSS ANY KEY TO CONTINUE...";
                            getch();
                            // code to sort
                            for (int i = 0; i < index; i++)
                            {
                                for (int j = 0; i < index; i++)
                                {
                                    if (aggre_arr[i] < aggre_arr[j])
                                    {
                                        // //swap of name
                                        string temp_name = name_arr[i];
                                        name_arr[i] = name_arr[j];
                                        name_arr[j] = temp_name;
                                        // //swap of mat
                                        int temp_matric = matric_arr[i];
                                        matric_arr[i] = matric_arr[j];
                                        matric_arr[j] = temp_matric;
                                        // swap of inter
                                        int temp_inter = inter_arr[i];
                                        inter_arr[i] = inter_arr[j];
                                        inter_arr[j] = temp_inter;
                                        // swap of ecat1
                                        int temp_ecat1 = ecat1_arr[i];
                                        ecat1_arr[i] = ecat1_arr[j];
                                        ecat1_arr[j] = temp_ecat1;
                                        // swap of pref1
                                        string temp_pref1 = pref1_arr[i];
                                        pref1_arr[i] = pref1_arr[j];
                                        pref1_arr[j] = temp_pref1;
                                        // swap of pref2
                                        string temp_pref2 = pref2_arr[i];
                                        pref2_arr[i] = pref2_arr[j];
                                        pref2_arr[j] = temp_pref2;
                                        // swap of pref3
                                        string temp_pref3 = pref3_arr[i];
                                        pref3_arr[i] = pref3_arr[j];
                                        pref3_arr[j] = temp_pref3;
                                        // swap of aggre
                                        float temp_aggregate = aggre_arr[i];
                                        aggre_arr[i] = aggre_arr[j];
                                        aggre_arr[j] = temp_aggregate;
                                    }
                                }
                            }
                        }
                        else if (choice == 5)
                        {
                            // delete record
                            cout << "ENTER THE NAME YOU WANT TO DELETE:";
                            string search_name;
                            cin >> search_name;
                            bool found = false;
                            int found_index = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (name_arr[i] == search_name)
                                {
                                    found_index = i;
                                    found = true;
                                }
                            }
                            if (found == true)
                            {
                                name_arr[found_index] = "";
                                age_arr[found_index] = 0;
                                matric_arr[found_index] = 0;
                                inter_arr[found_index] = 0;
                                ecat1_arr[found_index] = 0;
                                ecat2_arr[found_index] = 0;
                                pref1_arr[found_index] = "";
                                pref2_arr[found_index] = "";
                                pref3_arr[found_index] = "";
                                cout << "RECORD OF NAME " << search_name << " HAS BEEN DELETED." << endl;
                            }

                            else
                            {
                                cout << "NO REACORD FOUND AGAINTS " << search_name;
                            }
                            cout << "PRESSS ANY KEY TO CONTINUE...";
                            getch();
                        }

                        else if (choice == 6)
                        {
                            cout << "PRESS ANY KEY TO CONTINUE..." << endl;
                            break;
                        }
                        else
                        {
                            cout << "WRONG INPUT!, TRY AGAIN";
                        }
                    }

                    getch();
                    break;
                }
                else
                {
                    cout << "WRONG USERNAME OR PASSOWRD!, TRY AGAIN" << endl;
                }
                cout << "PRESS ANY KEY TO CONTINUE..." << endl;
                getch();
            }
        }
        else if (option == 2)
        {
            system("cls");
            // student menu
            cout << "                   WELCOME TO STUDENT MENU" << endl;
            cout << "                 ---------------------------" << endl;
            string name;
            int age;
            int matric_marks;
            int inter_marks;
            int ecat1_marks;
            int ecat2_marks;
            string pref1;
            string pref2;
            string pref3;
            float aggregate;
            cout << "ENTER YOUR NAME:";
            cin >> name;
            cout << "ENTER YOUR AGE:";
            cin >> age;
            cout << "ENTER YOUR MATRIC MARKS:";
            cin >> matric_marks;
            cout << "ENTER YOUR INTER MARKS:";
            cin >> inter_marks;
            cout << "ENTER YOUR ECAT TEST 1 MARKS:";
            cin >> ecat1_marks;
            cout << "ENTER YOUR ECAT TEST 2 MARKS:";
            cin >> ecat2_marks;
            cout << endl;
            cout << "                 CHOOSE CS , SE , EE AS PREFERENCE:" << endl;
            cout << "               --------------------------------------" << endl;
            cout << "ENTER YOUR 1 PREFERENCE:";
            cin >> pref1;
            cout << "ENTER YOUR 2 PREFERENCE:";
            cin >> pref2;
            cout << "ENTER YOUR 3 PREFERENCE:";
            cin >> pref3;
            name_arr[index] = name;
            age_arr[index] = age;
            matric_arr[index] = matric_marks;
            inter_arr[index] = inter_marks;
            ecat1_arr[index] = ecat1_marks;
            ecat2_arr[index] = ecat2_marks;
            pref1_arr[index] = pref1;
            pref2_arr[index] = pref2;
            pref3_arr[index] = pref3;
            index = index + 1;
            cout << "YOUR DATA HAS EEN SAVED";
            getche;
        }
        else if (option == 3)
        {
            cout << "THANK YOU FOR VISITING!" << endl;
            break;
        }
        else
        {
            cout << "WRONG INPUT! , CHOOSE OTHER OPTION" << endl;
        }
    }
    return 0;
}