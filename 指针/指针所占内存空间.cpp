#include <iostream>
#include "starter.h"

using namespace std;


#ifdef POINTER_MEM_OCCUPY

int main() {
	int a = 20;
	int* p = &a;

	//��32λ����ϵͳ�£�ָ��ռ4���ֽڣ�����ʲô��������
	//��64λ����ϵͳ�£�ָ��ռ8���ֽڣ�����ʲô��������
	cout << "sizeof(int*) = " << sizeof(p) << endl;
	cout << "sizeof(int*) = " << sizeof(int*) << endl;
	cout << "sizeof(char*) = " << sizeof(char*) << endl;
	cout << "sizeof(float*) = " << sizeof(float*) << endl;
	cout << "sizeof(double*) = " << sizeof(double*) << endl;

	return 0;
}


#endif // POINTER_MEM_OCCUPY
