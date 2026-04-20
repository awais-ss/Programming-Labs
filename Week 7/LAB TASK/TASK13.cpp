#include <iostream>
using namespace std;

bool login()
{
	string u, p;
	int t = 0;

	while(t < 3)
	{
		cout << "Enter Username: ";
		cin >> u;
		cout << "Enter Password: ";
		cin >> p;

		if(u == "admin" && p == "1234")
		{
			cout << "Login Successful" << endl;
			return true;
		}
		else
		{
			cout << "Wrong Login" << endl;
			t++;
		}
	}

	cout << "Too many attempts. Program End." << endl;
	return false;
}

void menu()
{
	cout << "\n====University Manageement System====" << endl;
	cout << "1. Add Student" << endl;
	cout << "2. View Students" << endl;
	cout << "3. Add Course" << endl;
	cout << "4. Exit" << endl;
	cout << "Enter Choice: ";
}

void add_stu(string name[], int age[], int &x)
{
	if(x >= 100)
	{
		cout << "Storagee Full!" << endl;
		return;
	}

	cout << "Enter Student Name: ";
	cin >> name[x];
	cout << "Enter Student Agee: ";
	cin >> age[x];
	x++;

	cout << "Student Added Successfully" << endl;
}

void showstu(string name[], int age[], int x)
{
	if(x == 0)
	{
		cout << "No Student Record Found" << endl;
		return;
	}

	cout << "\n--- Student List ---" << endl;
	for(int i = 0; i < x; i++)
	{
		cout << "Student " << i+1 << endl;
		cout << "Name: " << name[i] << endl;
		cout << "Age: " << age[i] << endl;
		cout << "-------------------" << endl<<endl;
	}
}

void add_course(string coorse[], int &y)
{
	if(y >= 100)
	{
		cout << "Course Storage Full!" << endl;
		return;
	}

	cout << "Enter Course Name: ";
	cin >> coorse[y];
	y++;

	cout << "Course Added Successfully" << endl;
}

int main()
{
	if(!login())
		return 0;

	string name[100];
	int age[100];
	string coorse[100];
	int x = 0;
	int y = 0;
	int ch;

	while(true)
	{
		menu();
        cout<<"ENTER CHOICE:";
		cin >> ch;

		if(ch == 1)
			add_stu(name, age, x);
		else if(ch == 2)
			showstu(name, age, x);
		else if(ch == 3)
			add_course(coorse, y);
		else if(ch == 4)
		{
			cout << "Program Exit" << endl;
			return 0;
		}
		else
			cout << "Invalid Choice" << endl;
	}
}