#include <iostream>
#include "golf.h"
#include <cstring>
using namespace std;

void setgolf(golf & g, const char * name, int hc){
    strcpy(g.fullname, name);
    g.handicap = hc;
}

int setgolf(golf & g){
    cout << "Enter the fullname: ";
    cin.getline(g.fullname, Len);
    cout << "Enter the handicap: ";
    cin >> g.handicap;
    if (strlen(g.fullname) == 0)
        return 0;
    else
        return 1;
}

void handicap(golf & g, int hc){
    g.handicap = hc;
}

void showgolf(const golf & g){
    cout << "fullname: " << g.fullname << endl;
    cout << "handicap: " << g.handicap << endl;
}
