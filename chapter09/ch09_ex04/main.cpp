#include <iostream>
#include "sales.h"
using namespace SALES;

int main(){
    Sales sales1, sales2;
    setSales(sales1);   // 使用交互式版本为sales1赋值
    double ar[3] = {100.0, 200.0, 300.0};
    setSales(sales2, ar, 3);   // 使用非交互式版本为sales2赋值
    showSales(sales1);
    showSales(sales2);
    return 0;
}
