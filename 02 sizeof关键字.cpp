#include <iostream>
using namespace std;

int main1() {

	//可以利用sizeof求出数据类型占用内存大小
	//语法：sizeof （数据类型/变量)

	short num1 = 10;
	cout << "short占用内存空间为：" << sizeof(short) << endl;

	int num2 = 10;
	cout << "int占用内存空间为：" << sizeof(num2) << endl;
	system("pause");
	return 0;
}