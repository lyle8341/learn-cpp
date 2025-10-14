#include "starter.h"


#ifdef ASSIGNMENT_OPERATOR


class Person {
public:
	Person(int age) {
		this->age = new int(age);
	}


	~Person() {
		if (age != NULL) {
			delete age;
			age = NULL;
		}
	}


	//�� Project(��Ͷ���)�������ǳ����.cpp

	//void operator=(Person& p) {
	//	//���ͷŸɾ���Ȼ�������
	//	if (this->age != NULL) {
	//		delete age;
	//		this->age = NULL;
	//	}
	//	//���
	//	this->age = new int(*p.age);
	//}

	//���������㼶����ֵ
	Person& operator=(Person& p) {
		//���ͷŸɾ���Ȼ�������
		if (this->age != NULL) {
			delete age;
			this->age = NULL;
		}
		//���
		this->age = new int(*p.age);
		return *this;
	}


	int* age;

};

void test01() {
	Person p1(18);

	Person p2(20);

	p2 = p1;

	Person p3(100);

	p3 = p2 = p1;
	cout << "p1����: " << *p1.age << endl;
	cout << "p2����: " << *p2.age << endl;
	cout << "p3����: " << *p3.age << endl;
}

int main() {
	test01();

	return 0;
}


#endif // ASSIGNMENT_OPERATOR
