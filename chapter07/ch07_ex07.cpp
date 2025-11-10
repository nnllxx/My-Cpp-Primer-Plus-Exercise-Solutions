#include <iostream>
using namespace std;
const int MaxSize = 10;

double * fill_array(double * ar, int size);   // 向数组填入值，返回数组最后一个元素 后一个单位 的地址
void show_array(double * ar, double * ar_end);   // 显示数组中的元素
void reverse_array(double * ar, double * ar_end);   // 反转数组

int main()
{
	double ar[MaxSize];
	double * ar_end;
	ar_end = fill_array(ar, MaxSize);
	show_array(ar, ar_end);
	reverse_array(ar, ar_end);
	show_array(ar, ar_end);
	reverse_array(ar+1, ar_end-1);   // 保留数组的第一个和最后一个元素不变，其余部分反转
	show_array(ar, ar_end);
	return 0;
}

double * fill_array(double * ar, int size){
	int i = 0;
	cout << "Enter up to " << MaxSize << " numbers to fill the array\n"
			"(enter a non-numeric value to finish early): ";
	while((i<size) && (cin>>ar[i]))
		i++;
	return ar + i;
}

void show_array(double * ar, double * ar_end){
	cout << "show: ";
	int i = 0;
	while(ar+i < ar_end){
		cout << *(ar+i) << " ";
		i++;
	}
	cout << "\n";
}

void reverse_array(double * ar, double * ar_end){
	double temp;
	int size = ar_end - ar;   // 用size表示数组长度
	int num = size / 2;   // 用num表示需要反转操作的次数
	if(size % 2 == 1)   // 若size为奇数，则 num = size整除2 + 1
		num += 1;
	for(int i=0;i<num;i++){
		temp = ar[i];
		ar[i] = ar[size-1-i];
		ar[size-1-i] = temp;
	}
}
