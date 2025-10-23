#include <iostream>
using namespace std;

int main(){
	cout << R"(You can enter up to 10 double values.
Input terminates when non-numeric values are entered.
The program will return how many values bigger than the average.
Enter your values:
)";

	double x[10];
	int i = 0;
	double total = 0;
  
	// Input section
	for(i;i<10;i++){
		cin >> x[i];
		if(cin.fail()){
			cout << "You entered something non-numeric." << endl;
			break;
		}
		total += x[i];
	}
  
	// Prevent division by zero error
	if(i==0){
		cout << "There is no valid value." << endl;
		return 0;
	}
  
	// Calculating the average and comparing
	double avg = total/(i+1);
	int num = 0;
	for(int j=0;j<=i;j++){
		if(x[j]>avg)
			num += 1;
	}
	cout << "The average is " << avg << "." << endl;
	cout << num << " value" << (num == 1 ? " is" : "s are") 
		<< " bigger than the average." << endl;
	return 0;
}
