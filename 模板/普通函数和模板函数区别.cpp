#include "starter.h"


#ifdef ORDINARY_FUNCTION_TEMPLATE
//TODO ��ͨ�������Է�����ʽ����ת����ģ�庯��ֻ����ʾ��ʽ�ſ��Է�����ʽת��

int myadd(int a, int b) {
	return a + b;
}

template<class T>
int	add(T a, T b) {
	return a + b;
}

void test01() {
	int a = 2;
	int b = 4;
	cout << "��ͨ����: " << myadd(a, b) << endl;

	//TODO ��ʽ����ת��
	char c = 'a';
	cout << "��ͨ������ʽת��: " << myadd(a, c) << endl;
}

void test02() {
	int a = 6;
	int b = 4;
	cout << "ģ�庯��: " << add(a, b) << endl;

	char c = 'a';
	//��ʾ��ʽ�ſ�����ʽת��
	cout << "ģ�庯��: " << add<int>(a, c) << endl;
}

int main() {
	test01();
	test02();
	return 0;
}

#endif // ORDINARY_FUNCTION_TEMPLATE