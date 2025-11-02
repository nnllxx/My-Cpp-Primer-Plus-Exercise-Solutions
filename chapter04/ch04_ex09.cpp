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
	CandyBar * pt = new CandyBar [3];
	pt[0] = {"Mocha Munch", 2.3, 350};
	pt[1] = {"AAA", 1.1, 110};
	pt[2] = {"BBB", 2.2, 220};
	for(int i=0;i<3;i++){
	cout << "i: " << i << endl
		<< "brand: " << pt[i].brand << endl
		<< "weight: " << pt[i].weight << endl
		<< "calories: " << pt[i].calories << endl;
	}
	delete [] pt;
	return 0;
}
