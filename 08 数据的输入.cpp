#include<iostream>
using namespace std;


int main() {

	//1.整型
	int a = 0;
	cout << "请给整型变量a赋值:" << endl;
	cin >> a;
	cout << "整型变量a= " << a << endl;

	//2.浮点型
	float f = 3.14f;
	cout << "请给浮点型变量f赋值：" << endl;
	cin >> f;
	cout << "浮点型变量f = " << f << endl;

	//3.字符型
	//4,字符串型
	string str = "hello";

	//5.布尔类型
	bool flag = false;
	//bool类型 只要是非零的值都代表真

	system("pause");
	return 0;
}