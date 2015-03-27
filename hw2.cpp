#include <iostream>
#include <string>
using namespace std;

class student
{

	private:
	// Student Full Name
	char* name;

	// Student id, cannot be null and will be auto-incremented
	int student_id;
	// Is used for the auto-incrementation of the the student id
	static int next_id;

	// Indicates if a student is a Freshman, Sophomore, Junior, Senior
	// Freshman == 1
	// Sophomore == 2
	// Junior == 3
	// Senior == 4
	int year_of_study;

	// Indicated if a student is Female(true) or a Male(false)
	bool gender;


	public:
	static int next_user_id()
	{
		next_id++;
		return next_id;
	}

	void setName(char* x)
	{
		while(*x){
			*student::name = *x;
			x++;
			student::name++;
		}
		*student::name = '\0';
	}

	void setGender (bool x)
	{
		gender = x;
	}

	void setYear(int x)
	{
		if( x > 0  && x < 5)
		 	year_of_study = x;
		else
			cout << "Incorrect input. Try a value between 1 and 4\n";
	}

	student(char* flname, bool gend, int year)
	{
		student_id = student::next_id++;
		gender = gend;
		year_of_study = year;
	}
};

int student::next_id = 0;

void addRec()
{
	cout << "In addRec\n";
}

void listRec()
{
	cout << "In listRec\n";
}

void modRec()
{
	cout << "In modRec\n";
}

void delRec()
{
	cout << "In delRec\n";
}

void printMenu()
{
	int choice = 0;

	while (choice != 5)
	{
		cout << "\n===== STUDENT DATABASE MANAGEMENT SYSTEM =====\n\n\n";
		cout << "\t1. Add Records\n";
		cout << "\t2. List Records\n";
		cout << "\t3. Modify Records\n";
		cout << "\t4. Delete Records\n";
		cout << "\t5. Exit Program\n\n";
		cout << "Select Your Choice :=> ";

		cin >> choice;
		//cout << choice << "\n\n";

		switch(choice)
		{
			case 1:
				addRec();
			break;
			case 2:
				listRec();
			break;
			case 3:
				modRec();
			break;
			case 4:
				delRec();
			break;
			case 5:
			break;
			default:
			cout << "Invalid solution, please try again\n\n";
			break;
		}
	}
	cout << "\n\n\tThank you very much for using the Student Database Management System\n\n";

}

int main()
{
	//int i;
	printMenu();
	return 0;
}
