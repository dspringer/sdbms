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
	}

	student()
	{
		student_id = student::next_id++;
	}
};

int student::next_id = 0;

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
		cout << choice << "\n\n";
	}
	cout << "\n\n\tThank you very much for using the Student Database Management System\n\n";

}

int main()
{
	//int i;
	printMenu();
	return 0;
}
