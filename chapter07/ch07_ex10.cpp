#include <iostream>
using namespace std;

double calculate(double, double, double (*pt)(double, double));
double add(double d1, double d2){return d1+d2;}
double subtract(double d1, double d2){return d1-d2;}
double multiply(double d1, double d2){return d1*d2;}

int main()
{
    double (*pf[3])(double, double) = {add, subtract, multiply};
    double d1, d2;
    cout << "Enter two numbers (q to quit): ";
    while(cin>>d1>>d2){
        for(int i=0;i<3;i++)
            cout << "func" << i+1 << ": " << calculate(d1, d2, pf[i]) << endl;
        cout << "Continue: ";
    }
    cout << "Bye!" << endl;
    return 0;
}

double calculate(double d1, double d2, double (*pf)(double, double)){
    return (*pf)(d1, d2);
}
