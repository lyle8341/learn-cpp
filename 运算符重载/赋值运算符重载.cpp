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


	//见 Project(类和对象)中深拷贝和浅拷贝.cpp

	//void operator=(Person& p) {
	//	//先释放干净，然后再深拷贝
	//	if (this->age != NULL) {
	//		delete age;
	//		this->age = NULL;
	//	}
	//	//深拷贝
	//	this->age = new int(*p.age);
	//}

	//升级，满足级联赋值
	Person& operator=(Person& p) {
		//先释放干净，然后再深拷贝
		if (this->age != NULL) {
			delete age;
			this->age = NULL;
		}
		//深拷贝
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
	cout << "p1年龄: " << *p1.age << endl;
	cout << "p2年龄: " << *p2.age << endl;
	cout << "p3年龄: " << *p3.age << endl;
}

int main() {
	test01();

	return 0;
}


#endif // ASSIGNMENT_OPERATOR
