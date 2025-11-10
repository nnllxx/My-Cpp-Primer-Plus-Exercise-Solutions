#include <iostream>
using namespace std;

struct box{
	char maker[40];
	float hight;
	float width;
	float length;
	float volume;
};

void show(box x);

void get_volume(box & x);

int main(){
	box x = {"abcdef", 2, 3, 4};   // 随意地初始化一下
	show(x);
	get_volume(x);
	show(x);
	return 0;
}

void show(box x){
	cout << "maker: " << x.maker << endl
		 << "hight: " << x.hight << endl
		 << "width: " << x.width << endl
		 << "length: "<< x.length<< endl
		 << "volume: "<< x.volume<< endl;
}

void get_volume(box & x){
	x.volume = x.hight * x.length * x.width;
}
