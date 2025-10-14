#include "starter.h"

#ifdef THIS_POINTER

//TODO this指针的本质： 指针常量
class Person {
public:
	//1.this可以解决命名冲突
	Person(int age) {
		this->age = age;
	}


	int age;

	//TODO 返回本体，必须用引用方式返回
	//TODO 返回本体，必须用引用方式返回
	//TODO 返回本体，必须用引用方式返回
	Person& personAddAge(Person& p) {
		this->age += p.age;
		//this指向p2的指针，而*this 指向的就是p2这个对象本体
		return *this;
	}

};


void test01() {
	Person p(20);
	Person p2(30);

	//p2.personAddAge(p);
	//cout << "p2的年龄: " << p2.age << endl;

	p2.personAddAge(p).personAddAge(p).personAddAge(p);
	cout << "p2的年龄: " << p2.age << endl;
}

int main() {
	test01();
	return 0;
}
#endif // THIS_POINTER
