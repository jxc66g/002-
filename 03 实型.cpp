#include<iostream>
using namespace std;

int main3() {


	//1.单精度 float
	//2.双精度 double
	//默认情况下 输出一个小数，会显示出6位有效数字
	float f1 = 3.14f;

	cout << "f1 = " << f1 << endl;

	double d1 = 3.14;

	cout << "d1 = " << d1 << endl;


	//统计float和double占用内存空间
	cout << "float 占用内存空间为：" << sizeof(float) << endl;

	float f2 = 3e2; // 3*10的2次方
	float f3 = 3e-2; // 3*0.1的2次方

	system("pause");
	return 0;
}