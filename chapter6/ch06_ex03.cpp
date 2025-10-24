#include <iostream>
using namespace std;

int main(){
	cout << R"(Please enter one of the following choices:
c) carnivore        p) pianist
t) tree             g) game
)";
	char ch;
	cin >> ch;
	while((ch!='c') and (ch!='p') and (ch!='t') and (ch!='g')){
		cout << "Please enter c, p, t or g: ";
		cin >> ch;
	};
	switch(ch){
		case 'c':
			cout << "car-car-carnivore" << endl;
			break;
		case 'p':
			cout << "pi-pi-pianist" << endl;
			break;
		case 't':
			cout << "tree-ee-ee" << endl;
			break;
		case 'g':
			cout << "ga-ga-game" << endl;
			break;
	};
	return 0;
}
