#include "starter.h"


#ifdef REFERENCE_BASE

//���õ����ã� �����������
//�﷨�� �������� &���� = ԭ��

int main() {
	int a = 10;
	int& b = a;

	//sizeof ����������������ʱ�����ص������ö���Ĵ�С�����������ñ���Ĵ�С��
	cout << "sizeof(a) = " << sizeof(a) << endl;
	cout << "sizeof(b) = " << sizeof(b) << endl;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	b = 100;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

}

#endif // REFERENCE_BASE