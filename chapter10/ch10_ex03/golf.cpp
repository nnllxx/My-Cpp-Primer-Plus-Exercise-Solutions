#include <iostream>
#include "golf.h"
#include <cstring>
using namespace std;

golf::golf(const char * name, int hc){
    strcpy(fullname, name);
    handicap = hc;
}

golf setgolf(){
    char fn[Len];
    int hc;
    cout << "Enter the fullname: ";
    cin.getline(fn, Len);
    cout << "Enter the handicap: ";
    cin >> hc;
    cin.get();   // 清除缓冲区的换行符
    return golf(fn, hc);
}

void golf::sethandicap(int hc){
    handicap = hc;
}

void golf::showgolf(){
    cout << "fullname: " << fullname << endl;
    cout << "handicap: " << handicap << endl;
}
