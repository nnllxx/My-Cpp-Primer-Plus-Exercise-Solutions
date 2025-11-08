#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream file;
	file.open("input.txt");   // 要读取的文件
	int count = 0;
	char ch;
	while(file.get(ch))
		count += 1;
	file.close();
	cout << "This file contains " << count << " characters.";
	return 0;
}
