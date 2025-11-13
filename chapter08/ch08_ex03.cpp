#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void upper(string & st);

int main(){
    string st;
    cout << "Enter a string (q to quit): ";
    while(getline(cin, st)&&(st!="q")){
        upper(st);
        cout << st << endl;
        cout << "Next string (q to quit): ";
    }
    return 0;
}

void upper(string & st){
    for(int i=0;i<st.length();i++)
        st[i] = toupper(st[i]);
}
