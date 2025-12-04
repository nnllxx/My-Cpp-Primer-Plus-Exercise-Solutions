#include <iostream>
#include "sales.h"

namespace SALES{
    Sales::Sales(const double ar[], int n){
        int num = (n < QUARTERS) ? n : QUARTERS;   // 令num为n和4中的较小者
        for(int i=0; i<num; i++)
            sales[i] = ar[i];
        for(int i=num; i<QUARTERS; i++)   // 若n小于4，则sales数组剩余的值设为0
            sales[i] = 0;
        calculate();   // 计算min、max、average
    }

    Sales::Sales(){
        for(int i=0; i<QUARTERS; i++){
            std::cout << "Enter the sales of quarter " << i+1 << ": ";
            std::cin >> sales[i];
        }
        calculate();
    }

    void Sales::showSales() const{
        using std::cout;
        using std::endl;
        cout << "show:" << endl;
        for(int i=0;i<QUARTERS;i++){
            cout << "sales of quarter" << i+1 << ": " << sales[i] << endl;
        }
        cout << "average: " << average << endl;
        cout << "max: " << max << endl;
        cout << "min: " << min << endl;
    }

    void Sales::calculate(){
        max = 0;
        min = 0;
        double total = 0;
        for(int i=0; i<QUARTERS; i++){
            total += sales[i];
            if(sales[i] > max)
                max = sales[i];
            if(sales[i] < min)
                min = sales[i];
        }
        average = total / QUARTERS;
    }
}

