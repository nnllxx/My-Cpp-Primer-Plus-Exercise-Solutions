#include <iostream>
using namespace std;

int main()
{	
	const char * months[12] = {
		"Jan", "Feb", "Mar", "Apr", 
		"May", "Jun", "Jul", "Aug",
		"Sep", "Oct", "Nov", "Dec"
		};    //字符串字面量是const char[]类型，所以使用const char*
	int value[12] = {0};
	int sum = 0;
	for(int i=0;i<12;i++){
		cout << "Enter the value of " << months[i] << " : ";
		cin >> value[i];
		sum += value[i];
	}
	cout << "sum = " << sum;
	return 0;
}
