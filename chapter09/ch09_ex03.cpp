#include <iostream>
#include <cstring>
using namespace std;
const int BUF = 50;
char buffer[BUF];

struct chaff{
    char dross[20];
    int slag;
};   // 可以验证 sizeof(chaff) 为24

int main(){
    chaff * pt = new (buffer) chaff[2];   //使用定位new，不需要delete
    strcpy(pt[0].dross, "aaaa-bbbb-cccc-");
    pt[0].slag = 1;
    strcpy(pt[1].dross, "1111-2222-3333-");
    pt[1].slag = 2;
    for(int i=0;i<2;i++){
        cout << "#" << i+1 << ": \n";
        cout << "dross: " << pt[i].dross << endl;
        cout << "slag: " << pt[i].slag << endl;
    }
    return 0;
}
