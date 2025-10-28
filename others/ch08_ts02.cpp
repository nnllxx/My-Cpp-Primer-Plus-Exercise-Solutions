#include <iostream>
using namespace std;

void swapr(int & a,int & b){
	int temp = a;
	a = b;
	b = temp;
}

int main(){
	long x = 5L;
	long y = 6L;
	swapr(x, y);
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	return 0;
}

// 这个程序会报错：[Error] cannot bind non-const lvalue reference of type 'int&' to an rvalue of type 'int'
// 翻译：[错误] 无法将类型为 'int&' 的非const左值引用绑定到类型为 'int' 的右值
// 由于x, y的类型与a, b不匹配，所以需要创建临时变量来传递给函数
// 不允许个临时值（右值）传递给非const的左值引用参数
// 如果在函数定义中加上const再运行程序，则会报错：[Error] assignment of read-only reference 'a'
