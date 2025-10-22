#include "starter.h"

#ifdef CLASS_TEMPLATE_DEFAULT_PARAMS

//TODO 类模板在模板参数列表中可以有默认参数
template<class NameType = string, class AgeType = int>
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
	Person<> p1("lyle", 20);
	p1.print();
}

int main() {
	test01();
	return 0;
}
#endif // CLASS_TEMPLATE_DEFAULT_PARAMS