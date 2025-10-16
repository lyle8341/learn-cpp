#include "starter.h"

#ifdef TEMPLATE_LIMITATION

class Person {
public:
	string name;
	int age;

	Person(string name, int age) {
		this->name = name;
		this->age = age;
	}
};

template<class T>
bool mycompare(T& a, T& b) {
	return a == b;
}

//TODO 利用具体化Person的版本实现， 具体化优先调用
//TODO 具体化语法  template<>
template<> bool mycompare(Person& a, Person& b) {
	return a.name == b.name && a.age == b.age;
}

void test01() {
	int a = 10;
	int b = 20;
	cout << (mycompare(a, b) ? "相等" : "不相等") << endl;
}

void test02() {
	Person a("Tom", 10);
	Person b("Tom", 10);
	cout << (mycompare(a, b) ? "相等" : "不相等") << endl;
}

int main() {
	//test01();
	test02();
	return 0;
}
#endif // TEMPLATE_LIMITATION