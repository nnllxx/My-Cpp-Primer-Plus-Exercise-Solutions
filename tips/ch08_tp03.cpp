#include <iostream>
using namespace std;

void f1(const int * p_c){
	cout << "f1" << endl;
}

void f2(int * p){
	cout << "f2" << endl;
}

int main()
{	
	int x = 1;
	int * p = &x;
	f1(p);   // 将int*传给const int * 可以
	
	const int * p_c = &x;
	f2(p_c);   // 将const int * 传给 int* 不行，程序在这行报错
	return 0;
}
