#include <iostream>
using namespace std;
#include <cstring>    // for strlen(), strcpy()
#include <new>
char buffer[50];

struct stringy {
    char * str;    // points to a string
    int ct;        // length of string (not counting '\0')
};

void set(stringy & sty, const char * testing);
void show(const stringy & sty, int n = 1);
void show(const char * sty, int n = 1);

int main()
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";

    set(beany, testing); 
    show(beany);  // prints member string once
    show(beany, 2);  // prints member string twice
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);  // prints testing string once
    show(testing, 3); // prints testing string thrice
    show("Done!");
    return 0;
}

void set(stringy & sty, const char * testing){
    sty.ct = strlen(testing);
    sty.str = new (buffer) char[sty.ct+1];
    strcpy(sty.str, testing);
}

void show(const stringy & sty, int n){
    for(int i=0;i<n;i++)
        cout << sty.str << endl;
}

void show(const char * testing, int n){
    for(int i=0;i<n;i++)
        cout << testing << endl;
}
