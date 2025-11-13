#include <iostream>
#include <string>
using namespace std;

void funny_func(string * pt, int x=0);

int main()
{
    string str = "hello hhh.";   // 不能直接 string * pt = "hhh";
    string * pt = &str;
    cout << "1. one parameter: " << endl;
    funny_func(pt);
    cout << "2. one parameter: " << endl;
    funny_func(pt);
    cout << "3. two parameter: " << endl;
    funny_func(pt, -1);
    cout << "4. two parameter: " << endl;
    funny_func(pt, -1);
    return 0;
}

void funny_func(string * pt, int x){   // 原型给出默认值后，定义不用再写默认值
    static int num = 0;
    if(x)
        for(int i=0;i<=num;i++)
            cout << *pt << endl;
    else
        cout << *pt << endl;
    num++;
}
