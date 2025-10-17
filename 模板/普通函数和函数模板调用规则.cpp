#include "starter.h"

#ifdef ORDINARY_TEMPLATE_FUNCTION_CALLED

//1.��ͬ����£����ȵ�����ͨ����
//2.����ͨ����ģ������б� ǿ�Ƶ��� ģ�庯��
//3.����ģ����Է�������
//4.�������ģ�����ƥ�䣬���ȵ���ģ�庯��

void myprint(int a, int b) {
	cout << "��ͨ����" << endl;
}

template<class T>
void myprint(T a, T b) {
	cout << "ģ�庯��" << endl;
}

template<class T>
void myprint(T a, T b, T c) {
	cout << "����ģ�庯��" << endl;
}

//���ȵ�����ͨ����
void test01() {
	int a = 1;
	int b = 2;
	myprint(a, b);
}

//ǿ�Ƶ���ģ�庯��
void test02() {
	int a = 1;
	int b = 2;
	myprint<>(a, b);
}

//ģ�庯������
void test03() {
	int a = 1;
	int b = 2;
	int c = 3;
	myprint<>(a, b, c);
}

int main() {
	//test01();
	//test02();
	test03();
	return 0;
}
#endif // ORDINARY_TEMPLATE_FUNCTION_CALLED