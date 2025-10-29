#include <iostream>
using namespace std;

int main(){
	char first_name[20];
	char last_name[10];
	char deserve_grade;
	int age;
	cout << "What is your first name? ";
	cin >> first_name;
	cout << "What is your last name? ";
	cin >> last_name;
	cout << "What letter grade do you deserve? ";
	cin >> deserve_grade;
	char grade = deserve_grade + 1;
	cout << "What is your age? ";
	cin >> age;
	cout << "Name: " << last_name << ", " << first_name << endl
		<< "Grade: " << grade << endl
		<< "Age: " << age << endl;
	return 0; 
}
