#include <iostream>
using namespace std;

double harmonic_mean(double x, double y);

int main(){
	double x, y;
	cout << "Enter two numbers (exit if any of them is 0): ";
	while((cin >> x >> y) && (x!=0) && (y!=0)){
		cout << "Harmonic mean of " << x << " and " << y <<
				" is " << harmonic_mean(x, y) << endl;
		cout << "Continue: ";
	}
	cout << "Bye!" << endl;
	return 0;
}

double harmonic_mean(double x, double y){
	return 2*x*y/(x+y);
}
