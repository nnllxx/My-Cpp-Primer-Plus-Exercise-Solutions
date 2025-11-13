#include <iostream>
using namespace std;

int main()
{
    float x = 3.1415;
    cout << x << endl;   // 直接显示声明的数字 3.1415

    // 下行代码，设置浮点数为定点表示法，返回之前的所有格式标志保存在initialState
    ios_base::fmtflags initialState = cout.setf(ios_base::fixed, ios_base::floatfield);
    streamsize prec = cout.precision(2);   // 设置浮点数显示精度为2位小数，并返回之前的精度值存在prec中
    cout << x << endl;   // 显示两位小数 3.14

    cout.setf(initialState, std::ios_base::floatfield);   // 将浮点显示格式恢复为原来的设置
    cout.precision(prec);   // 将小数精度恢复为原来的值
    cout << x << endl;   // 直接显示声明的数字 3.1415
    return 0;
}
