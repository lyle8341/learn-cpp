#include "starter.h"


#ifdef CONSTRUCT_DESTRUCTOR_FUNCTION


class Person {

	//1.���캯�� ���г�ʼ������
	//���������ʱ�򣬹��캯�����Զ����ã�����ֻ����һ��
public:
	Person() {
		cout << "Person ���캯��������" << endl;
	}

	//2.�������� �����������
	//���������������в����������Է�������
	//����������ǰ���Զ�������������������ֻ�����һ��
	~Person() {
		cout << "Person ��������������" << endl;
	}




};

void test01() {
	Person p;//��ջ�ϵ����ݣ�������ִ����Ϻ��ͷ��������
}

int main() {

	test01();
	return 0;
}


#endif // CONSTRUCT_DESTRUCTOR_FUNCTION
