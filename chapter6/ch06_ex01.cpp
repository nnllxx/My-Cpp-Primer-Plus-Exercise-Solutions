#include <iostream>
#include <cctype>
using namespace std;

int main() {
  cout << R"(This program will echo the input characters with the following rules:
	1. Do not display digits
	2. Convert lowercase letters to uppercase
	3. Convert uppercase letters to lowercase
	4. Stop processing when encountering '@'
Please enter characters: 
)";
	
	char ch;	
    while((ch = cin.get()) != '@'){
		if(!isdigit(ch)){
			if(isupper(ch))
				cout << static_cast<char>(tolower(ch));
				// tolower() will output an int type
				// static_cast<char> is the C++ style type conversion
				// char() is the C style
			else if(islower(ch))
				cout << static_cast<char>(toupper(ch));
			else
				cout << ch;
		}
	}
	cout << " You have entered an @." << endl;
	return 0;
}
