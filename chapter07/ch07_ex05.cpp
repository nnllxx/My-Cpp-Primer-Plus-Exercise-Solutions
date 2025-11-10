#include <iostream>
using namespace std;

long factorial(int n);

int main()
{
	int n;
	cout << "Enter an integer to get its factorial: ";
	cin >> n;
	cout << n << "! = " << factorial(n);
	return 0;
}

long factorial(int n){
	if(n>0)
		return n * factorial(n-1);
	else
		return 1;
}
