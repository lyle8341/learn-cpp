#include "starter.h"


#ifdef CLASS_TEMPLATE

//TODO 类模板没有自动推导方式，必须显示指定



//类模板
template<class NameType, class AgeType>
class Person {
public:
	Person(NameType name, AgeType age) {
		this->name = name;
		this->age = age;
	}

	void print() {
		cout << "姓名: " << name << "\t年龄: " << age << endl;
	}

	NameType name;
	AgeType age;
};

void test01() {
	Person<string, int> p1("lyle", 20);
	p1.print();
}

int main() {
	test01();
	return 0;
}

#endif // CLASS_TEMPLATE