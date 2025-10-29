#include <iostream>
#include <string>
using namespace std;

struct Pizza{
	string corp_name;
	float diameter;
	float weight;
};

int main()
{	
	Pizza pizza;
	cout << "Enter the corp_name: ";
	getline(cin, pizza.corp_name);
	cout << "Enter the diameter: ";
	cin >> pizza.diameter;
	cout << "Enter the weight: ";
	cin >> pizza.weight;
	cout << "corp_name: " << pizza.corp_name << endl
		<< "diameter: " << pizza.diameter << endl
		<< "weight: " << pizza.weight << endl;
	return 0;
}
