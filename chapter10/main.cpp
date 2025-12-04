#include <iostream>
#include "sales.h"
using namespace SALES;

int main(){
    Sales sales1 = Sales();   // 使用交互式版本为sales1赋值
    double ar[3] = {100.0, 200.0, 300.0};
    Sales sales2 = Sales(ar, 3);   // 使用非交互式版本为sales2赋值
    sales1.showSales();
    sales2.showSales();
    return 0;
}