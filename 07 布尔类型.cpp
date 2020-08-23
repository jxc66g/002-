#include<iostream>
using namespace std;


int main7() {

	//1.创建bool数据类型
	bool flag = true; //true为真
	cout << flag << endl;

	flag = false;
	cout << flag << endl;
	//本质上1 代表真 0 代表假

	//2.查看bool类型所占空间
	cout << "size of bool = " << sizeof(bool) << endl; //1
	system("pause");
	return 0;
}