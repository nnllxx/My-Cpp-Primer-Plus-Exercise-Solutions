#include <iostream>
using namespace std;
const int MaxSize = 10;

int fill_array(double * ar, int size);   // 向数组填入值，并返回数组长度
void show_array(double * ar, int size);   // 显示数组中的元素
void reverse_array(double * ar, int size);   // 反转数组

int main()
{
	double ar[MaxSize];
	int size;
	size = fill_array(ar, MaxSize);
	show_array(ar, size);
	reverse_array(ar, size);
	show_array(ar, size);
	reverse_array(ar+1, size-2);   // 保留数组的第一个和最后一个元素不变，其余部分反转
	show_array(ar, size);
	return 0;
}

int fill_array(double * ar, int size){
	int i = 0;
	cout << "Enter up to " << MaxSize << " numbers to fill the array\n"
			"(enter a non-numeric value to finish early): ";
	while((i<size) && (cin>>ar[i]))
		i++;
	return i;
}

void show_array(double * ar, int size){
	cout << "show: ";
	for(int i=0;i<size;i++){
		cout << ar[i] << " ";
	}
	cout << "\n";
}

void reverse_array(double * ar, int size){
	double temp;
	int num = size / 2;   // 用num表示需要反转操作的次数
	if(size % 2 == 1)   // 若size为奇数，则 num = size整除2 + 1
		num += 1;
	for(int i=0;i<num;i++){
		temp = ar[i];
		ar[i] = ar[size-1-i];
		ar[size-1-i] = temp;
	}
}
