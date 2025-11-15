#include <iostream>
#include <cstring>
using namespace std;

template <class T>
T maxn(T * ar, int n);

// 字符串数组声明时要使用 const char*，如果此时令T为char * ，则无法被const char* 的数组调用
template <> const char* maxn<const char*>(const char ** ar, int n);

int main(){
    int ar1[6] = {0, 2, 5, 1, 3, 4};
    double ar2[4] = {0.1, 2.1, 3.1, 1.1};
    cout << maxn(ar1, 6) << endl;
    cout << maxn(ar2, 4) << endl;
    const char* ar3[5] = {"aaa", "bbbb", "ccc", "dddd", "ee"};
    cout << maxn(ar3, 5) << endl;
    return 0;
}

template <class T>
T maxn(T * ar, int n){
    T temp = ar[0];
    for(int i=1;i<n;i++){
        if(ar[i]>temp)
            temp = ar[i];
    }
    return temp;
}

template <> const char* maxn<const char*>(const char ** ar, int n){
    const char * temp = ar[0];
    for(int i=1;i<n;i++)
        if(strlen(ar[i])>strlen(temp))
            temp = ar[i];
    return temp;
}
