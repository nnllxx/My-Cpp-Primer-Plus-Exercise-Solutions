#include <iostream>
using namespace std;

int main()
{	
	int start, end;
	cout << "Enter two integers: ";
	cin >> start >> end;
	int sum = 0;
	for(int i=start;i<=end;i++){
		sum += i;
	}
	cout << "The sum of integers between " 
		<< start <<" and " << end 
		<< " is " << sum << endl;
	return 0;
}
