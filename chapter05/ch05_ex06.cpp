#include <iostream>
using namespace std;

int main()
{	
	int values[3][12];
	for(int i=0;i<3;i++){
		for(int j=0;j<12;j++){
			cout << "Enter the value of year " << i+1 
				<< " month " << j+1 << ": ";
			cin >> values[i][j];
		}
	}
	int sum_rows[3] = {0};
	int sum_all = 0;
	for(int i=0;i<3;i++){
		for(int j=0;j<12;j++){
			sum_rows[i] +=values[i][j];
		}
	}
	for(int i=0;i<3;i++){
		sum_all += sum_rows[i];
		cout << "sum of year " << i+1 << ": " << sum_rows[i] << endl;
	}
	cout << "sum of all: " << sum_all << endl;
	return 0;
}
