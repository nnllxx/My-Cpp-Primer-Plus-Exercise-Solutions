#include <iostream>
#include <cstring>
using namespace std;

struct CandyBar{
    char name[40];
    double weight;
    int calories;
};

void getCandyBar(CandyBar & cb, const char * nm = "Millennium Munch",
                 const double wei = 2.85, const int cal = 350);

void show(const CandyBar & cb);

int main()
{
    CandyBar cb1, cb2;
    getCandyBar(cb1);
    getCandyBar(cb2, "hhh", 1.2, 100);
    show(cb1);
    show(cb2);
    return 0;
}

void getCandyBar(CandyBar & cb, const char * nm, const double wei, const int cal){
    strcpy(cb.name, nm);   // 不能直接 cb.name = nm （指针可以被指针赋值，但数组标识符不可以）
    cb.weight = wei;
    cb.calories = cal;
}

void show(const CandyBar & cb){
    cout << cb.name << ": " << cb.weight << ", " << cb.calories << endl;
}
