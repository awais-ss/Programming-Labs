#include <iostream>
#include <conio.h>
using namespace std;

//-----------------------------------PROTOTYPE START--------------------------------------
void LMS_HEADER();
void wait();
void headings();
void single_stud_record(int index);
int find_by_name(string name);

// PROFESSORS FUNCTIONS:
void professor_login();
void PROFESSORS_menu();
void PROFESSOR_HEADER();
void register_new_student();
void view_all_students();
void update_subject_marks();
void sort_students_by_gpa();
void search_student_record();
void announcement_board();
void post_announcement();
void view_class_performance();
void delete_student_record();
void read_students_feedback();
// STUDENT FUNCTIONS:
void student_portal_by_id();
void student_menu();
void student_header();
void view_profile(int index);
void view_registered_courses(int index);
void view_my_grades(int index);
void check_attendance(int index);
void view_teacher_announcements();
void unregister_subject(int index);
void submit_feedback();
void calculate_gpa();
void view_contact_directory();

// SORTING:
void swaping_sorting_gpa();
//-----------------------------------PROTOTYPE END----------------------------------------

//-----------------------------------DATA STRUCTURE START--------------------------------------
int students_number = 1000;
int static_data = 5;
int ID_ARRAY[1000] = {1001, 1002, 1003, 1004, 1005};
string NAME_ARRAY[1000] = {"ALI", "HIRA", "MINAL", "ASAD", "TAHA"};

// SUBJECTS NAME
string SUBJECT_1_ARRAY[1000] = {"PF", "PF", "PF", "PF", "PF"};
string SUBJECT_2_ARRAY[1000] = {"AP", "AP", "AP", "AP", "AP"};
string SUBJECT_3_ARRAY[1000] = {"DM", "DM", "DM", "DM", "DM"};

// MARKS
string MARkS_SUBJECT_1_ARRAY[1000] = {"85", "90", "75", "65", "55"};
string MARkS_SUBJECT_2_ARRAY[1000] = {"78", "82", "70", "60", "58"};
string MARkS_SUBJECT_3_ARRAY[1000] = {"92", "85", "80", "68", "62"};

float ATTENDENCE_ARRAY[1000] = {88.5, 92.0, 75.5, 80.0, 70.0};
float GPA_ARRAY[1000] = {3.8, 3.9, 3.2, 2.8, 3.7};

string PROF_ANNOUNCEMENT_ARRAY[3] = {
    "NO ANNOUNCEMENT HERE",
    "NO ANNOUNCEMENT HERE",
    "NO ANNOUNCEMENT HERE",
};
string STUD_FEEDBACK_ARRAY[3] = {
    "NO FEEDBACK HERE",
    "NO FEEDBACK HERE",
    "NO FEEDBACK HERE",
};
//-----------------------------------DATA STRUCTURE END----------------------------------------

//-----------------------------------MAIN START--------------------------------------
int main()
{
    LMS_HEADER();
    int choice;
    while (choice != 3)
    {
        cout << "1: PROFESSOR\n2: STUDENT\n3: EXIT\n";
        cout << "-------------------------------------------------------------\n";
        cout << "WHAT IS YOUR CHOICE: ";
        cin >> choice;
        if (choice == 1)
        {
            professor_login();
        }
        else if (choice == 2)
        {
            student_portal_by_id();
        }
    }
    return 0;
}
//-----------------------------------MAIN END--------------------------------------

//-----------------------------------FUNCTIONS START--------------------------------------

// --------------------------------- HELPER FUNCTIONS ---------------------------------

void wait()
{
    cout << "\n                [>] Press any key to return to Portal..." << endl;
    ;
    getch();
}

void LMS_HEADER()
{
    cout << "------------------------------------------------------------" << endl;
    cout << "|            UNIVERSITY LEARNING MANAGEMENT SYSTEM         |" << endl;
    cout << "|                 (UET LAHORE - CS DEPARTMENT)             |" << endl;
    cout << "------------------------------------------------------------" << endl
         << endl;
}

void headings()
{
    cout << "-----------------------------------------------------------------------------------\n";
    cout << "NAME\tSUB_1\tSUB_2\tSUB_3\tMARKS_1\tMARKS_2\tMARKS_3\tATTENDENCE\tGPA\n";
    cout << "-----------------------------------------------------------------------------------\n";
}

void single_stud_record(int index)
{
    cout << NAME_ARRAY[index] << "\t"
         << SUBJECT_1_ARRAY[index] << "\t"
         << SUBJECT_2_ARRAY[index] << "\t"
         << SUBJECT_3_ARRAY[index] << "\t"
         << MARkS_SUBJECT_1_ARRAY[index] << "\t"
         << MARkS_SUBJECT_2_ARRAY[index] << "\t"
         << MARkS_SUBJECT_3_ARRAY[index] << "\t  "
         << ATTENDENCE_ARRAY[index] << "\t     "
         << GPA_ARRAY[index] << endl;
}

int find_by_name(string name)
{
    bool isfound = false;
    int index = -1;
    for (int i = 0; i < static_data; i++)
    {
        if (NAME_ARRAY[i] == name)
        {
            index = i;
            isfound = true;
        }
    }
    return index;
}

// -------------------------------------------------- PROFESSOR HEADER & MENU ---------------------------------

void PROFESSOR_HEADER()
{
    cout << "--------------------------------------------" << endl;
    cout << "           LMS PROFESSOR PORTAL             " << endl;
    cout << "--------------------------------------------" << endl;
}

void PROFESSORS_menu()
{
    cout << "-------------------------------------------------------------";
    cout << "\n 1.  REGISTER NEW STUDENT";
    cout << "\n 2.  VIEW ALL REGISTERED STUDENTS";
    cout << "\n 3.  UPDATE SUBJECT MARKS";
    cout << "\n 4.  SORT STUDENT BY GPA";
    cout << "\n 5.  SEARCH STUDENT COMPLETE RECORD";
    cout << "\n 6.  POST NEW ANNOUNCEMENT";
    cout << "\n 7.  VIEW CLASS PERFORMANCE";
    cout << "\n 8.  DELETE/REMOVE STUDENT RECORD";
    cout << "\n 9.  READ STUDENTS FEEDBACK";
    cout << "\n 10. LOGOUT AND RETURN TO PORTAL" << endl;
    cout << "-------------------------------------------------------------\n";
}

// --------------------------------- STUDENT HEADER & MENU ---------------------------------

void student_header()
{
    cout << "--------------------------------------------" << endl;
    cout << "            LMS STUDENT PORTAL              " << endl;
    cout << "--------------------------------------------" << endl
         << endl;
}

void student_menu()
{
    cout << "-------------------------------------------------------------\n";
    cout << "\n 1.  VIEW PROFILE";
    cout << "\n 2.  VIEW REGISTERED COURSES";
    cout << "\n 3.  VIEW MY GRADES/MARKS";
    cout << "\n 4.  CHECK ATTENDANCE PERCENTAGE";
    cout << "\n 5.  VIEW TEACHER ANNOUNCEMENTS";
    cout << "\n 6.  UNREGISTER SUBJECTS";
    cout << "\n 7.  SUBMIT FEEDBACK FOR TEACHER";
    cout << "\n 8.  CALCULATE GPA";
    cout << "\n 9.  VIEW UNIVERSITY CONTACT DIRECTORY";
    cout << "\n 10. LOGOUT AND EXIT PORTAL" << endl;
    cout << "-------------------------------------------------------------\n";
}

// --------------------------------- SORTING ---------------------------------

void swaping_sorting_gpa()
{
    for (int i = 0; i < static_data; i++)
    {
        for (int j = i + 1; j < static_data; j++)
        {
            if (GPA_ARRAY[i] < GPA_ARRAY[j])
            {
                // swap names
                string temp_name = NAME_ARRAY[i];
                NAME_ARRAY[i] = NAME_ARRAY[j];
                NAME_ARRAY[j] = temp_name;
                // swap gpa
                float temp_gpa = GPA_ARRAY[i];
                GPA_ARRAY[i] = GPA_ARRAY[j];
                GPA_ARRAY[j] = temp_gpa;
                // swap subject 1
                string temp_sub1 = SUBJECT_1_ARRAY[i];
                SUBJECT_1_ARRAY[i] = SUBJECT_1_ARRAY[j];
                SUBJECT_1_ARRAY[j] = temp_sub1;
                // swap subject 2
                string temp_sub2 = SUBJECT_2_ARRAY[i];
                SUBJECT_2_ARRAY[i] = SUBJECT_2_ARRAY[j];
                SUBJECT_2_ARRAY[j] = temp_sub2;
                // swap subject 3
                string temp_sub3 = SUBJECT_3_ARRAY[i];
                SUBJECT_3_ARRAY[i] = SUBJECT_3_ARRAY[j];
                SUBJECT_3_ARRAY[j] = temp_sub3;
                // swap MARKS_subject 1
                string MARKS_temp_sub1 = MARkS_SUBJECT_1_ARRAY[i];
                MARkS_SUBJECT_1_ARRAY[i] = MARkS_SUBJECT_1_ARRAY[j];
                MARkS_SUBJECT_1_ARRAY[j] = MARKS_temp_sub1;
                // swap MARKS_subject 2
                string MARKS_temp_sub2 = MARkS_SUBJECT_2_ARRAY[i];
                MARkS_SUBJECT_2_ARRAY[i] = MARkS_SUBJECT_2_ARRAY[j];
                MARkS_SUBJECT_2_ARRAY[j] = MARKS_temp_sub2;
                // swap MARKS_subject 3
                string MARKS_temp_sub3 = MARkS_SUBJECT_3_ARRAY[i];
                MARkS_SUBJECT_3_ARRAY[i] = MARkS_SUBJECT_3_ARRAY[j];
                MARkS_SUBJECT_3_ARRAY[j] = MARKS_temp_sub3;
                // swap id
                int temp_id = ID_ARRAY[i];
                ID_ARRAY[i] = ID_ARRAY[j];
                ID_ARRAY[j] = temp_id;
                // swap attendence
                float temp_attendence = ATTENDENCE_ARRAY[i];
                ATTENDENCE_ARRAY[i] = ATTENDENCE_ARRAY[j];
                ATTENDENCE_ARRAY[j] = temp_attendence;
            }
        }
    }
}

// --------------------------------- PROFFESSOR FUNCTIONS ---------------------------------

void register_new_student()
{ // REGISTER NEW STUDENT
    system("CLS");
    cout << "--------------------------------------------" << endl;
    cout << "          REGISTER NEW STUDENT              " << endl;
    cout << "--------------------------------------------" << endl;

    cout << "ENTER STUDENT ID: ";
    cin >> ID_ARRAY[static_data];

    cout << "ENTER STUDENT NAME: ";
    cin >> NAME_ARRAY[static_data];
    cout << "ENTER SUBJECT 1 NAME (PF,DM,AICT,CAL): ";
    cin >> SUBJECT_1_ARRAY[static_data];

    cout << "ENTER SUBJECT 2 NAME (PF,DM,AICT,CAL): ";
    cin >> SUBJECT_2_ARRAY[static_data];
    cout << "ENTER SUBJECT 3 NAME (PF,DM,AICT,CAL): ";
    cin >> SUBJECT_3_ARRAY[static_data];

    cout << "ENTER MARKS FOR " << SUBJECT_1_ARRAY[static_data] << ": ";
    cin >> MARkS_SUBJECT_1_ARRAY[static_data];

    cout << "ENTER MARKS FOR " << SUBJECT_2_ARRAY[static_data] << ": ";
    cin >> MARkS_SUBJECT_2_ARRAY[static_data];
    cout << "ENTER MARKS FOR " << SUBJECT_3_ARRAY[static_data] << ": ";
    cin >> MARkS_SUBJECT_3_ARRAY[static_data];

    cout << "ENTER ATTENDANCE PERCENTAGE (0-100): ";
    cin >> ATTENDENCE_ARRAY[static_data];

    cout << "ENTER GPA: ";
    cin >> GPA_ARRAY[static_data];

    cout << "--------------------------------------------" << endl;
    cout << "STUDENT REGISTERED SUCCESSFULLY!" << endl;

    // FOR NEXT STUDENT INDEX
    static_data++;
    wait();
}

void view_all_students()
{ // VIEW ALL REGISTERED STUDENTS
    system("CLS");
    headings();
    for (int i = 0; i < static_data; i++)
    {
        cout << NAME_ARRAY[i] << "\t"
             << SUBJECT_1_ARRAY[i] << "\t"
             << SUBJECT_2_ARRAY[i] << "\t"
             << SUBJECT_3_ARRAY[i] << "\t"
             << MARkS_SUBJECT_1_ARRAY[i] << "\t"
             << MARkS_SUBJECT_2_ARRAY[i] << "\t"
             << MARkS_SUBJECT_3_ARRAY[i] << "\t  "
             << ATTENDENCE_ARRAY[i] << "\t     "
             << GPA_ARRAY[i] << endl;
    }
    cout << "-----------------------------------------------------------------------------------\n";
    wait();
}

void update_subject_marks()
{ // UPDATE SUBJECT MARKS
    system("CLS");
    cout << "ENTER NAME YOU WANT TO SEARCH:";
    string name;
    cin >> name;
    bool isfound = false;
    int index = find_by_name(name);
    if (index != -1)
    {
        isfound = true;
    }
    if (isfound == true)
    {
        cout << endl
             << "                <<< BEFORE UPDATING MARKS >>>" << endl
             << endl;

        cout << "FIRST SUBJECT'S MARKS IS:" << MARkS_SUBJECT_1_ARRAY[index] << endl;
        cout << "SECOND SUBJECT'S MARKS IS:" << MARkS_SUBJECT_2_ARRAY[index] << endl;
        cout << "THIRD SUBJECT'S MARKS IS:" << MARkS_SUBJECT_3_ARRAY[index] << endl
             << endl;

        cout << "FIRST SUBJECT'S MARKS:";
        cin >> MARkS_SUBJECT_1_ARRAY[index];
        cout << "SECOND SUBJECT'S MARKS:";
        cin >> MARkS_SUBJECT_2_ARRAY[index];
        cout << "THIRD SUBJECT'S MARKS:";
        cin >> MARkS_SUBJECT_3_ARRAY[index];

        cout << endl
             << "                <<< AFTER UPDATING MARKS >>>" << endl
             << endl;

        cout << "FIRST SUBJECT'S MARKS IS:" << MARkS_SUBJECT_1_ARRAY[index] << endl;
        cout << "SECOND SUBJECT'S MARKS IS:" << MARkS_SUBJECT_2_ARRAY[index] << endl;
        cout << "THIRD SUBJECT'S MARKS IS:" << MARkS_SUBJECT_3_ARRAY[index] << endl;
    }
    else
    {
        cout << "STUDENT RECORD NOT FOUND";
    }
    wait();
}

void sort_students_by_gpa()
{ // SORT STUDENT BY GPA
    system("CLS");
    swaping_sorting_gpa();
    headings();
    for (int i = 0; i < static_data; i++)
    {
        single_stud_record(i);
    }
    cout << "-----------------------------------------------------------------------------------\n";
    wait();
}
void search_student_record()
{
    system("CLS");
    cout << "ENTER NAME YOU WANT TO SEARCH:";
    string name;
    cin >> name;
    bool isfound = false;
    int index = find_by_name(name);
    if (index != -1)
    {
        isfound = true;
    }
    if (isfound == true)
    {
        headings();
        single_stud_record(index);
        cout << "-----------------------------------------------------------------------------------\n";
    }
    else
    {
        cout << "STUDENT RECORD NOT FOUND";
    }
    wait();
}
void announcement_board()
{
    cout << "ANNONUCEMENT BOARD:" << endl;
    cout << "-----------------------------------------------------------------------------------\n";
    for (size_t i = 0; i < 3; i++)
    {
        cout << i + 1 << ": " << PROF_ANNOUNCEMENT_ARRAY[i] << endl
             << endl;
    }
    cout << "-----------------------------------------------------------------------------------\n";
}
void post_announcement()
{ // POST NEW ANNOUNCEMENT
    system("CLS");
    announcement_board();
    int announcement_choice = 0;
    wait();

    while (announcement_choice != 2)
    {
        system("CLS");
        cout << "1: ADD ANNOUNCEMENT\n2: EXIT ANOUNCEMENT" << endl;
        cout << "CHOOSE:";
        int announcement_index = 0;
        cin >> announcement_choice;
        if (announcement_choice == 1)
        {
            system("CLS");
            cout << "NUMBER OF ANNOUNCEMENT:";
            int announcement_numbers;
            cin >> announcement_numbers;
            cin.ignore();
            for (int i = 0; i < announcement_numbers; i++)
            {
                cout << i + 1 << ": ANNOUNCEMENT >>>  ";
                getline(cin, PROF_ANNOUNCEMENT_ARRAY[i]);
            }
        }
        else
        {
            cout << "WRONG CHOICE";
        }
    }
    system("CLS");
    cout << "UPDATED ANNONUCEMENT BOARD:" << endl;

    announcement_board();
    wait();
}

void view_class_performance()
{
    system("CLS");
    cout << "--------------------------------------------" << endl;
    cout << "             VIEW PERFORMANCE                " << endl;
    cout << "--------------------------------------------" << endl;
    cout << "TOTAL STUDENTS ARE:" << static_data << endl;
    cout << "SECTON IS "
            "A"
            " ";
    float sum_gpa = 0;
    for (int i = 0; i < static_data; i++)
    {
        sum_gpa += GPA_ARRAY[i];
    }
    float aver_gpa = sum_gpa / static_data;
    cout << "AVERAGE GPA OF THIS CLASS IS:" << aver_gpa << endl;
    wait();
}
void read_students_feedback()
{ // READ STUDENTS FEEDBACK
    system("CLS");
    cout << "--------------------------------------------" << endl;
    cout << "               FEEDBACK BOARD              " << endl;
    cout << "--------------------------------------------" << endl
         << endl;
    ;
    for (int i = 0; i < 3; i++)
    {
        cout << STUD_FEEDBACK_ARRAY[i] << endl;
    }
    wait();
}
void delete_student_record()
{ // DELETE/REMOVE STUDENT RECORD
    system("CLS");
    cout << "ENTER NAME YOU WANT TO DELETE:";
    string name;
    cin >> name;
    bool isfound = false;
    int index = find_by_name(name);
    if (index != -1)
    {
        isfound = true;
    }
    if (isfound == true)
    {
        cout << name << "'s DATA IS:" << endl;
        headings();
        single_stud_record(index);
        cout << endl;
        cout << "-----------------------------------------------------------------------------------\n";

        // deletion from here
        NAME_ARRAY[index] = "";
        SUBJECT_1_ARRAY[index] = "";
        SUBJECT_2_ARRAY[index] = "";
        SUBJECT_3_ARRAY[index] = "";
        MARkS_SUBJECT_1_ARRAY[index] = "";
        MARkS_SUBJECT_2_ARRAY[index] = "";
        MARkS_SUBJECT_3_ARRAY[index] = "";
        ATTENDENCE_ARRAY[index] = 0;
        GPA_ARRAY[index] = 0;
        cout << name << "'s DATA HAS BEEN DELETED:";

        for (int i = index; i < static_data - 1; i++) // move that one place left after index's value
        {
            ID_ARRAY[i] = ID_ARRAY[i + 1];
            NAME_ARRAY[i] = NAME_ARRAY[i + 1];
            SUBJECT_1_ARRAY[i] = SUBJECT_1_ARRAY[i + 1];
            SUBJECT_2_ARRAY[i] = SUBJECT_2_ARRAY[i + 1];
            SUBJECT_3_ARRAY[i] = SUBJECT_3_ARRAY[i + 1];
            MARkS_SUBJECT_1_ARRAY[i] = MARkS_SUBJECT_1_ARRAY[i + 1];
            MARkS_SUBJECT_2_ARRAY[i] = MARkS_SUBJECT_2_ARRAY[i + 1];
            MARkS_SUBJECT_3_ARRAY[i] = MARkS_SUBJECT_3_ARRAY[i + 1];
            ATTENDENCE_ARRAY[i] = ATTENDENCE_ARRAY[i + 1];
            GPA_ARRAY[i] = GPA_ARRAY[i + 1];
        }
        static_data--; // keep static data and students number maintainnnn
    }
    else
    {
        cout << "STUDENT RECORD NOT FOUND";
    }
    wait();
}

void professor_login()
{
    system("CLS");
    PROFESSOR_HEADER();
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
            int prof_choice = 0;
            while (prof_choice != 10)
            {
                // PROFESSOR MENU
                system("CLS");
                PROFESSORS_menu();
                cout << "WHAT IS YOUR CHOICE: ";
                cin >> prof_choice;
                if (prof_choice == 1)
                {
                    register_new_student();
                }
                else if (prof_choice == 2)
                {
                    view_all_students();
                }
                else if (prof_choice == 3)
                {
                    update_subject_marks();
                }
                else if (prof_choice == 4)
                {
                    sort_students_by_gpa();
                }
                else if (prof_choice == 5)
                {
                    search_student_record();
                }
                else if (prof_choice == 6)
                {
                    post_announcement();
                }
                else if (prof_choice == 7)
                {
                    view_class_performance();
                }
                else if (prof_choice == 8)
                {
                    delete_student_record();
                }
                else if (prof_choice == 9)
                {
                    read_students_feedback();
                }
                else if (prof_choice == 10)
                { // LOGOUT AND RETURN TO PORTAL
                    cout << "            <<< LOGOUT... >>>            " << endl;
                    wait();
                }
                else
                {
                    cout << "               <<< WRONG CHOICE >>>            " << endl;
                    wait();
                }
            }
            break;
        }
        else
        {
            if (i < 2)
            {
                cout << "WRONG CREDENTIALS! TRY AGAIN. ATTEMPTS LEFT: " << 2 - i << endl;
            }
            else
            {
                cout << "TOO MANY ATTEMPTS! LOGIN FAILED." << endl;
                break; // loop sa bahar a jai ga or again prof_stud choice show kra ga
            }
        }
    }
}

// --------------------------------- STUDENT FUNCTIONS ---------------------------------

void view_profile(int index)
{ // VIEW PROFILE
    system("CLS");
    cout << "YOUR DATA IS:" << endl;
    headings();
    single_stud_record(index);
    cout << endl;
    wait();
}

void view_registered_courses(int index)
{ // VIEW REGISTERED COURSES
    system("CLS");
    cout << "REGISTERED SUBJECTS ARE:" << endl;
    cout << SUBJECT_1_ARRAY[index] << "\n"
         << SUBJECT_2_ARRAY[index] << "\n"
         << SUBJECT_3_ARRAY[index] << endl;
    wait();
}

void view_my_grades(int index)
{ // VIEW MY GRADES/MARKS
    system("CLS");
    cout << "MARKS ARE:" << endl;
    cout << SUBJECT_1_ARRAY[index] << " MARKS ARE:" << MARkS_SUBJECT_1_ARRAY[index] << endl;
    cout << SUBJECT_2_ARRAY[index] << " MARKS ARE:" << MARkS_SUBJECT_2_ARRAY[index] << endl;
    cout << SUBJECT_3_ARRAY[index] << " MARKS ARE:" << MARkS_SUBJECT_3_ARRAY[index] << endl;
    wait();
}

void check_attendance(int index)
{ // CHECK ATTENDANCE PERCENTAGE
    system("CLS");
    cout << "YOUR ATTENDENCE IS:" << ATTENDENCE_ARRAY[index] << endl;
    wait();
}

void view_teacher_announcements()
{ // VIEW TEACHER ANNOUNCEMENTS
    system("CLS");
    for (int i = 0; i < 3; i++)
    {
        cout << PROF_ANNOUNCEMENT_ARRAY[i] << endl;
    }
    wait();
}

void unregister_subject(int index)
{ // UNREGISTER SUBJECTS
    system("CLS");
    cout << "\n--- UNREGISTER A SUBJECT ---" << endl;
    cout << "1. " << SUBJECT_1_ARRAY[index] << endl;
    cout << "2. " << SUBJECT_2_ARRAY[index] << endl;
    cout << "3. " << SUBJECT_3_ARRAY[index] << endl;
    cout << "WHICH SUBJECT DO YOU WANT TO UNREGISTER? : ";
    int subject_unregister;
    cin >> subject_unregister;
    if (subject_unregister == 1)
    {
        SUBJECT_1_ARRAY[index] = "-";
    }
    else if (subject_unregister == 2)
    {
        SUBJECT_2_ARRAY[index] = "-";
    }
    else if (subject_unregister == 3)
    {
        SUBJECT_3_ARRAY[index] = "-";
    }
    else
    {
        cout << "WRONG INPUT";
    }
    cout << "YOUR UPDATED REGISTERED SUBJECTS ARE:" << endl;
    cout << SUBJECT_1_ARRAY[index] << "\n"
         << SUBJECT_2_ARRAY[index] << "\n"
         << SUBJECT_3_ARRAY[index] << endl;
    wait();
}

void submit_feedback()
{ // SUBMIT FEEDBACK FOR TEACHER
    system("CLS");
    {
        int feedback_choice;
        while (feedback_choice != 2)
        {
            cout << "1: NEW FEEDBACK\n2: EXIT FEEDBACK" << endl;
            cout << "CHOOSE:";
            cin >> feedback_choice;
            if (feedback_choice == 1)
            {
                cout << "NUMBER OF FEEDBACK:";
                int FEEDBACK_numbers;
                cin >> FEEDBACK_numbers;
                cin.ignore();
                for (int i = 0; i < FEEDBACK_numbers; i++)
                {
                    cout << i + 1 << ": FEEDBACK >>>   ";
                    getline(cin, STUD_FEEDBACK_ARRAY[i]);
                }
            }
            else
            {
                cout << "WRONG CHOICE";
            }
        }
        system("CLS");
        cout << endl
             << "FEEDBACK BOARD:";
        cout << "-----------------------------------------------------------------------------------\n";
        for (int i = 0; i < 3; i++)
        {
            cout << i + 1 << ": " << STUD_FEEDBACK_ARRAY[i] << endl;
        }
        cout << "-----------------------------------------------------------------------------------\n";
    }
    wait();
}

void calculate_gpa()
{ // CALCULATE GPA
    system("CLS");
    float sub1, sub2, sub3, gpa_calculator;
    cout << "-----------------------------------------------------------------------------------\n";

    cout << "ENTER MARKS OF PF:";
    cin >> sub1;
    cout << "ENTER MARKS OF AP";
    cin >> sub2;
    cout << "ENTER MARKS OF DM:";
    cin >> sub3;
    cout << "-----------------------------------------------------------------------------------\n";

    gpa_calculator = (sub1 * 0.35) + (sub2 * 0.3) + (sub3 * 0.35);
    float final_gpa = 0.0;
    if (gpa_calculator > 75)
    {
        final_gpa = 4.0;
    }
    else if (gpa_calculator > 60)
    {
        final_gpa = 3.5;
    }
    else if (gpa_calculator > 50)
    {
        final_gpa = 3.0;
    }
    else if (gpa_calculator > 40)
    {
        final_gpa = 2.5;
    }
    else if (gpa_calculator > 30)
    {
        final_gpa = 2.0;
    }
    else
    {
        final_gpa = 0.0;
    }
    cout << "YOUR GPA BASED ON THE MARKS IS:" << final_gpa << endl;
    wait();
}

void view_contact_directory()
{ // VIEW UNIVERSITY CONTACT DIRECTORY
    system("CLS");
    cout << "\n------------------------------------------------------------" << endl;
    cout << "              UNIVERSITY CONTACT DIRECTORY                " << endl;
    cout << "------------------------------------------------------------" << endl;
    cout << "1. ADMISSION OFFICE:    042-111-222" << endl;
    cout << "2. ADMIN HELP DESK:     admin_support@uet.edu.pk" << endl;
    cout << "3. EXAM DEPARTMENT:     exams@uet.edu.pk" << endl;
    cout << "4. ACCOUNTS OFFICE:     0300-123456789" << endl;
    cout << "5. CS DEPARTMENT:       cs_department@uet.edu.pk" << endl;
    cout << "------------------------------------------------------------" << endl;
    cout << "LOCATION: G.T Road, Lahore, Pakistan" << endl;
    cout << "------------------------------------------------------------" << endl;
    wait();
}

void student_portal_by_id()
{
    student_header();
    cout << "ENTER YOUR ID:";
    int id;
    cin >> id;
    bool isfound = false;
    int index = -1;
    for (int i = 0; i < static_data; i++)
    {
        if (ID_ARRAY[i] == id)
        {
            index = i;
            isfound = true;
        }
    }
    if (isfound == true)
    {
        system("CLS");
        cout << "            WELCOME " << NAME_ARRAY[index] << endl
             << endl;
        system("CLS");
        int stud_choice = 0;
        while (stud_choice != 10)
        {
            // STUDENT MENU
            system("CLS");
            student_menu();
            cout << "WHAT IS YOUR CHOICE: ";
            cin >> stud_choice;
            if (stud_choice == 1)
            {
                view_profile(index);
            }
            else if (stud_choice == 2)
            {
                view_registered_courses(index);
            }
            else if (stud_choice == 3)
            {
                view_my_grades(index);
            }
            else if (stud_choice == 4)
            {
                check_attendance(index);
            }
            else if (stud_choice == 5)
            {
                view_teacher_announcements();
            }
            else if (stud_choice == 6)
            {
                unregister_subject(index);
            }
            else if (stud_choice == 7)
            {
                submit_feedback();
            }
            else if (stud_choice == 8)
            {
                calculate_gpa();
            }
            else if (stud_choice == 9)
            {
                view_contact_directory();
            }
            else if (stud_choice == 10)
            { // LOGOUT AND EXIT TO PORTAL
                cout << "            <<< LOGOUT... >>>            " << endl;
                wait();
            }
            else
            {
                cout << "               <<< WRONG CHOICE >>>            " << endl;
                wait();
            }
        }
    }
    else
    {
        system("CLS");
        cout << "                WRONG ID!" << endl;
        cout << "\n           [>] Press any key to return to Portal..." << endl;
        getch();
    }
}
//-----------------------------------FAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA-------------------------
