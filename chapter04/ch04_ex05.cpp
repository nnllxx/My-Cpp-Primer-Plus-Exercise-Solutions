#include <iostream>
#include <string>
using namespace std;

struct CandyBar{
	string brand;
	float weight;
	int calories;
};

int main()
{
	CandyBar snack = {"Mocha Munch", 2.3, 350};
	cout << "brand: " << snack.brand << endl
		<< "weight: " << snack.weight << endl
		<< "calories: " << snack.calories << endl;
	return 0;
}
