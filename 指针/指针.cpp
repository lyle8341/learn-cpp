#include <iostream>
#include "starter.h"

using namespace std;


#ifdef POINTER_DEFINE

int main() {
	//1.����ָ��
	int a = 10;
	//ָ�붨����﷨�� ��������* ָ�������;
	int* p = &a;
	cout << "a�ĵ�ַΪ:\t" << &a << endl;
	cout << "ָ��pΪ:\t" << p << endl;

	//2.ʹ��ָ�룬����ͨ�������õķ�ʽ���ҵ�ָ��ָ����ڴ�
	*p = 900;

	cout << "a = " << a << endl;
	cout << "*p = " << *p << endl;

	return 0;
}


#endif // POINTER_DEFINE
