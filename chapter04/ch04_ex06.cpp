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
	CandyBar snacks[3] = {
	{"Mocha Munch", 2.3, 350}, 
	{"AAA", 1.1, 110}, 
	{"BBB", 2.2, 220}
	};
	for(int i=0;i<3;i++){
	cout << "i: " << i << endl
		<< "brand: " << snacks[i].brand << endl
		<< "weight: " << snacks[i].weight << endl
		<< "calories: " << snacks[i].calories << endl;
	}
	return 0;
}
