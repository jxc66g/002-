#include<iostream>
using namespace std;

int main3() {


	//1.������ float
	//2.˫���� double
	//Ĭ������� ���һ��С��������ʾ��6λ��Ч����
	float f1 = 3.14f;

	cout << "f1 = " << f1 << endl;

	double d1 = 3.14;

	cout << "d1 = " << d1 << endl;


	//ͳ��float��doubleռ���ڴ�ռ�
	cout << "float ռ���ڴ�ռ�Ϊ��" << sizeof(float) << endl;

	float f2 = 3e2; // 3*10��2�η�
	float f3 = 3e-2; // 3*0.1��2�η�

	system("pause");
	return 0;
}