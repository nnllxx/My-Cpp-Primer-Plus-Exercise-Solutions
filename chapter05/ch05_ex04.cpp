#include <iostream>
using namespace std;

int main()
{	
	double value_d = 100;
	double value_c = 100;
	int year = 0;
	while(value_d >= value_c){
		value_d += 10;
		value_c *= 1.05;
		year += 1;
	}
	cout << "year = " << year << endl;
	cout << "value_d = " << value_d << endl;
	cout << "value_c = " << value_c << endl;
	return 0;
}
