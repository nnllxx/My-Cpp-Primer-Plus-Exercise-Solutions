#include <iostream>
using namespace std;

int main(){
	int x = 1;
	int* pt = &x;   // 对于通过指针来初始化的引用
	cout << "&x = " << &x << endl;
	
	int& x2 = *pt;
	cout << "x2 = " << x2 << endl;
	cout << "&x2 = " << &x2 << endl;
	
	int y = 2;
	pt = &y;   // 在被用于初始化的指针，指向了其他变量后
	cout << endl << "after pt=&y" << endl;
	cout << "&y = " << &y << endl;
	cout << "x2 = " << x2 << endl;
	cout << "&x2 = " << &x2 << endl;   // 引用的地址仍为初始化时，指针指向的地址

	return 0;
}
