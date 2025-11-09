#include <iostream>
using namespace std;
const int ArSize = 10;

int input(double * const ar);   // 返回一个存储了数组长度，方便后续函数定义
void show(const double * ar, const int & size);
double ave(const double * ar, const int & size);

int main(){
	double ar[ArSize] = {0};
	int size;
	size = input(ar);   // 取得数组长度
	show(ar, size);
	cout << "Average: " << ave(ar, size);
	return 0;
}

int input(double * const ar){
	int i = 0;
	cout << "Enter grades (non-numeric to exit): ";
	while((i<ArSize) && (cin>>ar[i])){
		i++;
	}
	return i;
}

void show(const double * ar, const int & size){
	cout << "Show: ";
	for(int i=0;i<size;i++){
		cout << ar[i] << " ";
	}
}

double ave(const double * ar, const int & size){
	double sum = 0;
	for(int i=0;i<size;i++)
		sum += ar[i];
	return sum / size;
}
