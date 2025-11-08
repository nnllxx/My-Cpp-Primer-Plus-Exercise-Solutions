#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream file;
	file.open("input.txt");   // 要读取的文件
	int count = 0;
	char ch;
	while(file.get(ch))   // 必须用带参数的版本
		count += 1;
	file.close();
	cout << "This file contains " << count << " characters.";
	return 0;
}

// 有cin.get()（不带参数）和cin.get(ch)（带参数）两个版本
// 不带参数的版本返回int，为读取的字符的ASCII(0-255)或EOF(-1)
// 若使用不带参数的版本，在读取至结尾时会返回EOF，-1对应的bool是true，会无限循环
// 带参数的版本返回istream&，while循环对其检查时相当于在检查cin.fail()
