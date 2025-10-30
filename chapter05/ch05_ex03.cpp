#include <iostream>
using namespace std;

int main()
{	
	double sum = 0;
	double input = 0;
	cout << "Enter a number (0 for quit): ";
	while((cin>>input)&&(input!=0)){
		sum += input;
		cout << "sum = " << sum << endl;
		cout << "new number: ";
	}
	return 0;
}
