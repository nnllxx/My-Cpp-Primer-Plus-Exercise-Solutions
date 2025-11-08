#include <iostream>
#include <cctype>
using namespace std;

int main(){
	char word[20];
	int num_vowel = 0;
	int num_consonant = 0;
	int num_other = 0;
	cout << "Enter words (q to quit):\n";
	while((cin>>word)&&(word[0]!='q')){
		if(isalpha(word[0])){
			switch(tolower(word[0])){
				case 'a':
				case 'e':
				case 'i':
				case 'o':
				case 'u':
					num_vowel += 1;
					break;
				default:
					num_consonant += 1;
					break;
			}
		}
		else
			num_other += 1;
	}
	cout << num_vowel << " words beginning with vowel.\n";
	cout << num_consonant << " words beginning with consonant.\n";
	cout << num_other << " others";
	return 0;
}
