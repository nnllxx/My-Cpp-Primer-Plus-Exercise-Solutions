#include <iostream>
const int strsize = 20;
using namespace std;

struct bop{
	char fullname[strsize];
	char title[strsize];
	char bopname[strsize];
	int preference;   // 0=fullname, 1=title, 2=bopname
};

int main(){
	cout << R"(Benevolent Order of Programmers Report:
a. display by name        b. display by title
c. display by bopname     d. display by preference
q. quit
Enter your choice: )";
	// 为bop的数组赋值
	bop ar[3] = {
		{"AJiang", "software engineer", "id001", 1},
		{"BJiang", "frontend developer", "id002", 2},
		{"CJiang", "backend developer", "id003", 0},
	};
	// Deal with the input
	char ch;
	while(cin >> ch){
		switch(ch){
			case 'a':
				for(int i=0;i<3;i++){
					cout << ar[i].fullname << endl;
				};
				cout << "Next choice: ";
				break;
			case 'b':
				for(int i=0;i<3;i++){
					cout << ar[i].title << endl;
				};
				cout << "Next choice: ";
				break;
			case 'c':
				for(int i=0;i<3;i++){
					cout << ar[i].bopname << endl;
				};
				cout << "Next choice: ";
				break;
			case 'd':
				for(int i=0;i<3;i++){
					if(ar[i].preference==0)
						cout << ar[i].fullname << endl;
					else if(ar[i].preference==1)
						cout << ar[i].title << endl;
					else
						cout << ar[i].bopname << endl;
				};
				cout << "Next choice: ";
				break;
			case 'q':
				cout << "Bye!" << endl;
				return 0;
			default:
				cout << "Please enter a, b, c, or d: ";
				break;
		}
	}
}
