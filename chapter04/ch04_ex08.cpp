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
	Pizza * pt = new Pizza;
	cout << "Enter the diameter: ";
	cin >> pt->diameter;
	cin.get();   // 清除缓冲区剩下的回车
	cout << "Enter the corp_name: ";
	getline(cin, pt->corp_name);
	cout << "Enter the weight: ";
	cin >> pt->weight;
	cout << "corp_name: " << pt->corp_name << endl
		<< "diameter: " << pt->diameter << endl
		<< "weight: " << pt->weight << endl;
	delete pt;
	return 0;
}
