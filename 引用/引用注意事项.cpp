#include <iostream>
#include "starter.h"

using namespace std;


#ifdef REFERENCE_NOTICE
int main() {
	int a = 10;
	int b = 20;

	//int& c; //�������ñ����ʼ��
	int& c = a; //һ����ʼ���󣬾Ͳ����Ը���
	c = b; //���︳ֵ���������Ǹ�������

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;


	return 0;
}
#endif // REFERENCE_NOTICE
