#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char word[20];
    int count = 0;
    cout << "Enter words (to stop, type the word done): ";
    do{
        cin >> word;
        count += 1;
    }while(strcmp(word, "done"));   // strcmp()会一直比较直到遇到任一个字符串的'\0'结束符，若相同则返回0。
    cout << "You entered a total of " << count-1 << " words.";
    return 0;
}
