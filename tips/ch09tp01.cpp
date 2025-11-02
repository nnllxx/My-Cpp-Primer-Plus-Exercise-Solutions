#include <iostream>
#include <new>
using namespace std;

int main()
{	
	int before = 8;
	cout << "&before = " << &before << "\t\t";
	cout << "before = " << before << endl;
	int buffer[3];
	for(int i=0;i<3;i++){
		cout << "&buffer[" << i << "] = " << &buffer[i] << endl;
	}
	int next = 9;
	cout << "&next = " << &next << "\t\t";
	cout << "next = " << next << endl;
	
	cout << "\nAfter new: " << endl;
	int* pt = new (buffer) int[5] {1, 2, 3, 4, 5};    // buffer是只有3个int的数组，用于为5个int的数组分配内存，不够
	cout << "&before = " << &before << "\t\t";
	cout << "before = " << before << endl;
	for(int i=0;i<5;i++){
		cout << "&pt[" << i << "] = " << &pt[i] << "\t\t";
		cout << "pt[" << i << "] = " << pt[i] << endl;
	}
	cout << "&next = " << &next << "\t\t";
	cout << "next = " << next << endl;
	return 0;
}

// 程序输出如下所示：
//&before = 0x78fe3c              before = 8
//&buffer[0] = 0x78fe30
//&buffer[1] = 0x78fe34
//&buffer[2] = 0x78fe38
//&next = 0x78fe2c                next = 9
//
//After new:
//&before = 0x78fe3c              before = 4
//&pt[0] = 0x78fe30               pt[0] = 1
//&pt[1] = 0x78fe34               pt[1] = 2
//&pt[2] = 0x78fe38               pt[2] = 3
//&pt[3] = 0x78fe3c               pt[3] = 4
//&pt[4] = 0x78fe40               pt[4] = 7929392
//&next = 0x78fe2c                next = 9

// 解释：
//在new之前的内存：
//地址：	2c		30		34		38		3c
//变量：	next	b[0]	b[1]	b[2]	before

//所以地址是从大到小被用于分配的：先把最大的分配给before，然后是3个int的数组，然后是next
//在new之后的内存：
//地址：	2c		30		34		38		3c		40
//变量： next	pt[0]	pt[1]	pt[2]	pt[3]	pt[4]
//pt[3]覆盖了before，初始化为4
//pt[4]没有初始化为5

