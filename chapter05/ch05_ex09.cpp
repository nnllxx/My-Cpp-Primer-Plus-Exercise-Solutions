#include <iostream>
#include <string>
using namespace std;

int main(){
    string word;
    int count = 0;
    cout << "Enter words (to stop, type the word done): ";
    do{
        cin >> word;
        count += 1;
    }while(word!="done");
    cout << "You entered a total of " << count-1 << " words.";
    return 0;
}
