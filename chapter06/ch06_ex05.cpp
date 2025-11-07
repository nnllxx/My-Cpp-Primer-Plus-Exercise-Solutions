#include <iostream>
using namespace std;

int main(){
	double salary;
	double tex;
	cout << "Enter the salary (negative or non-numeric to quit): ";
	while(cin>>salary){
		if (salary < 0){
			break;
		}
		if (salary <= 5000)
			tex = 0;
		else if (salary <= 15000)
			tex = (salary - 5000) * 0.1;
		else if (salary <= 35000)
			tex = (salary - 15000) * 0.15 + (15000-5000) * 0.1;
		else
			tex = (salary - 35000) * 0.2 + (35000-15000) * 0.15 + (15000-5000) * 0.1;
		cout << "tex: " << tex << endl;
		cout << "Next salary (negative or non-numeric to quit): ";
	}
	cout << "Bye!" << endl;
	return 0;
}
