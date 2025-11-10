#include <iostream>
using namespace std;
const int Seasons = 4;
const char* Snames[Seasons] = {"Spring", "Summer", "Fall", "Winter"};

struct double_ar{
    double expenses[Seasons];
};

void fill(double_ar & st);
void show(double_ar st);

int main(){
    double_ar st;
    fill(st);
    show(st);
    return 0;

}

void fill(double_ar & st){
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> st.expenses[i];
    }
}

void show(double_ar st) { 
    double total = 0.0; 
    cout << "\nEXPENSES\n"; 
    for (int i = 0; i < Seasons; i++) 
    { 
        cout << Snames[i] << ": $" << st.expenses[i] << endl; 
        total += st.expenses[i]; 
    } 
    cout << "Total Expenses: $" << total << endl;
}
