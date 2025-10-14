#include "starter.h"


#ifdef COPY_CONSTRUCT_CALLED_TIME

class Person {
public:
	Person() {
		cout << "PersonĬ�Ϲ��캯������" << endl;
	}

	Person(int age) {
		this->age = age;
		cout << "Person�вι��캯������" << endl;
	}

	Person(const Person& p) {
		this->age = p.age;
		cout << "Person�������캯������" << endl;
	}

	~Person() {
		cout << "Person������������" << endl;
	}

	int age;


};

//1.ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
void test01() {
	Person p1(20);
	Person p2(p1);
}

//2.ֵ���ݵķ�ʽ������������ֵ
void doWork(Person p) {

}

void test02() {
	Person p;
	doWork(p);
}

//3.ֵ��ʽ���ؾֲ�����
Person doWork2() {
	Person p1;
	cout << (int*)&p1 << endl;
	return p1;
}

void test03() {
	Person p = doWork2();
	cout << (int*)&p << endl;

}

int main() {
	//test01();
	//test02();
	test03();


	return 0;
}
#endif // COPY_CONSTRUCT_CALLED_TIME