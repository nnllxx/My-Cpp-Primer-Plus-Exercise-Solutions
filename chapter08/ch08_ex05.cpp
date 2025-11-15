#include <iostream>
using namespace std;

template <class T>
T max5(T * ar);

int main(){
    int ar1[5] = {0, 2, 4, 1, 3};
    double ar2[5] = {0.1, 2.1, 4.1, 1.1, 3.1};
    cout << max5(ar1) << endl;
    cout << max5(ar2) << endl;
    return 0;
}

template <class T>
T max5(T * ar){
    T temp = ar[0];
    for(int i=1;i<5;i++){
        if(ar[i]>temp)
            temp = ar[i];
    }
    return temp;
}
