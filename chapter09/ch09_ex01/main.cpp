#include <iostream>
#include "golf.h"
using namespace std;

int main(){
    int num;
    cout << "How many golf(s?) do you wish to catalog: ";
    cin >> num;
    cin.get();   // 清除缓冲区的换行符
    golf* pt = new golf[num];
    setgolf(pt[0], "Admin", 999);   // 为了将定义的各函数都使用一下，所以有一些多余的动作
    for(int i=1;i<num;i++)
        setgolf(pt[i]);
    handicap(pt[0], 666);
    for(int i=0;i<num;i++){
        cout << "#" << i+1 << ":" << endl;
        showgolf(pt[i]);
    }
    return 0;
}
