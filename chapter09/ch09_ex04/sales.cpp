#include <iostream>
#include "sales.h"

namespace SALES{
    void calculate(Sales & s);   // 用于setSales函数中的参数计算步骤

    void setSales(Sales & s, const double ar[], int n){
        int num = (n < QUARTERS) ? n : QUARTERS;   // 令num为n和4中的较小者
        for(int i=0; i<num; i++)
            s.sales[i] = ar[i];
        for(int i=num; i<QUARTERS; i++)   // 若n小于4，则sales数组剩余的值设为0
            s.sales[i] = 0;
        calculate(s);   // 计算min、max、average
    }

    void setSales(Sales & s){
        for(int i=0; i<QUARTERS; i++){
            std::cout << "Enter the sales of quarter " << i+1 << ": ";
            std::cin >> s.sales[i];
        }
        calculate(s);
    }

    void showSales(const Sales & s){
        using std::cout;
        using std::endl;
        cout << "show:" << endl;
        for(int i=0;i<QUARTERS;i++){
            cout << "sales of quarter" << i+1 << ": " << s.sales[i] << endl;
        }
        cout << "average: " << s.average << endl;
        cout << "max: " << s.max << endl;
        cout << "min: " << s.min << endl;
    }

    void calculate(Sales & s){
        s.max = 0;
        s.min = 0;
        double total = 0;
        for(int i=0; i<QUARTERS; i++){
            total += s.sales[i];
            if(s.sales[i] > s.max)
                s.max = s.sales[i];
            if(s.sales[i] < s.min)
                s.min = s.sales[i];
        }
        s.average = total / QUARTERS;
    }
}

