#include <iostream>
#include "golf.h"
using namespace std;

int main(){
    int num;
    cout << "How many golf(s?) do you wish to catalog: ";
    cin >> num;
    cin.get();   // 清除缓冲区的换行符
    golf* pt = new golf[num];
    pt[0] = golf();   // 调用使用默认值的构造函数
    for(int i=1;i<num;i++)
        pt[i] = setgolf();
    pt[0].sethandicap(666);
    for(int i=0;i<num;i++){
        cout << "#" << i+1 << ":" << endl;
        pt[i].showgolf();
    }
    return 0;
}
