#include <iostream>
#include <array>
using namespace std;

int main()
{	
	array<float, 3> times;
	cout << "Enter the times (in seconds) for three 40-meter runs: ";
	cin >> times[0];
	cin >> times[1];
	cin >> times[2];
	cout << "average : " << (times[0] + times[1] + times[2])/3 << endl;
	return 0;
}
