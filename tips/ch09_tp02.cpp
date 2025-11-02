#include <iostream>

namespace ns{
	int x;
}

int main()
{	
//	using ns::x;   // 报错。但若替换为 using namespace ns; 则可以
	double x = 1.1;
	std::cout << x << std::endl;
	return 0;
}

// 在main()中使用 using ns::x;
// 相当于在main()中声明 int x;
// 所以在main()中不能再声明double x;

// 在main()中使用 using namespace ns;
// 不会在当前作用域中引入具体的名称，只是让编译器在查找名称时也搜索 ns 命名空间
// 所以在main()中还能继续声明double x
// 当遇到 x 时，编译器会先查找当前作用域的局部变量
