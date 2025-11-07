#include <iostream>
#include <string>
using namespace std;

struct donation{
	string name;
	double money;
};

int main(){
	int num;
	cout << "How many patrons: ";
	cin >> num;
	cin.get();   // 丢弃缓冲区的一个换行符
	donation * pt = new donation[num];
	// 读取数据
	for(int i=0;i<num;i++){
		cout << "#" << i+1 << ": \nname:";
		getline(cin, pt[i].name);
		cout << "money: ";
		cin >> pt[i].money;
		cin.get();   // 丢弃缓冲区的一个换行符
	}
	// 打印Grand Patrons表
	cout << "\nGrand Patrons: " << endl;
	bool flag = false;   // 用一个变量标记这个表是否有人
	for(int i=0;i<num;i++){
		if(pt[i].money > 10000){
			cout << pt[i].name << ": " << pt[i].money << endl;
			flag = true;
		}
	}
	if(!flag)
		cout << "none" << endl;
	// 打印Patrons表
	cout << "Patrons: " << endl;
	flag = false;   // 用一个变量标记这个表是否有人
	for(int i=0;i<num;i++){
		if(pt[i].money <= 10000){
			cout << pt[i].name << ": " << pt[i].money << endl;
			flag = true;
		}
	}
	if(!flag)
		cout << "none" << endl;
	return 0;
}
