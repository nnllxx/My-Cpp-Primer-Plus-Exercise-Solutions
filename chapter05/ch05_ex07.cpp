#include <iostream>
#include <string>
using namespace std;
int count = 0;

struct car{
	string make;
	int year;
};

int main()
{	
	int num;
	cout << "How many cars do you wish to catalog: ";
	cin >> num;
	car* pt = new car[num];
	for(int i=0;i<num;i++){
		cout << "Car #" << i+1 << ": " << endl;
		cout << "make: ";
		cin.get();   // cin >> int不会丢弃换行符，手动丢弃
		getline(cin, pt[i].make);   // getline(cin, string) 遇到了\n停止，并丢弃
		cout << "year: ";
		cin >> pt[i].year;
	}
	cout << "Here is your collection: " << endl;
	for(int i=0;i<num;i++){
		cout << pt[i].year << " " << pt[i].make << endl;
	}
	return 0;
}


