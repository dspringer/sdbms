#include <iostream>
using namespace std;


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
