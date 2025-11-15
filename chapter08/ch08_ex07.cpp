// tempover.cpp -- template overloading
#include <iostream>
using namespace std;

template <typename T>    // template A
double SumArray(T arr[], int n);

template <typename T>    // template B
double SumArray(T * arr[], int n);

struct debts {
    char name[50];
    double amount;
};

int main() {
    
    int things[6] = {13, 31, 103, 301, 310, 130};
    struct debts mr_E[3] = {
        {"Tma Wolfe", 2400.0},
        {"Ura Foxe", 1300.0},
        {"IDy Scout", 1800.0}
    };
    double * pd[3];
    // set pointers to the amount members of the structures
    for (int i = 0; i < 3; i++)
        pd[i] = &mr_E[i].amount;

    // things is an array of int, uses template A
    cout << "sum of things: " << SumArray(things, 6) << endl;
    // pd is an array of pointers to double, uses template B (more specialized)
    cout << "sum of debts: " << SumArray(pd, 3) << endl; 
    return 0;
}

template <typename T>
double SumArray(T arr[], int n) {
    double sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}

template <typename T>
double SumArray(T * arr[], int n) {
    double sum = 0;
    for (int i = 0; i < n; i++)
        sum += *arr[i];
    return sum;
}
