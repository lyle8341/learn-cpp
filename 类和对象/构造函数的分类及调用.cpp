#include "starter.h"


#ifdef CONSTRUCT_FUNCTION_TYPE_CALLED

//1.���캯���ķ��༰����

class Person {
public:
	//�޲ι��캯��
	Person() {
		cout << "Person���޲ι��캯������" << endl;
	}

	Person(int a) {
		age = a;
		cout << "Person���вι��캯������" << endl;
	}


	//�������캯��
	Person(const Person& p) {
		//�����������������Կ��������Լ�����
		age = p.age;
		cout << "Person�Ŀ������캯������" << endl;
	}


	~Person() {
		cout << "Person��������������" << endl;
	}


	int age;


};


void test01() {

	//1.���ŷ�
	Person p1;		//Ĭ�Ϲ��캯������
	Person p2(10);	//�вι��캯��
	Person p3(p2);	//�������캯��

	//ע������
	//����Ĭ�Ϲ��캯��ʱ�򣬲�Ҫ��()�������������Ϊ�Ǻ���������
	Person declare();

	//2.��ʽ��
	Person pa = Person(20); // �вι���

	Person pc = Person(pa); // ��������

	Person(30); //���������ص㣺��ǰ��ִ�н�����ϵͳ���������յ���������

	//��Ҫ���ÿ������캯����ʼ������������Ϊ����������Ϊ Person(pa) === Person pa; �����ض�����
	//Person(pa);

	//3.��ʽת����
	Person px = 10; //�൱��д�� Person px = Person(10);
	Person py = px; //��������

}

int main() {
	test01();
	return 0;
}
#endif // CONSTRUCT_FUNCTION_TYPE_CALLED