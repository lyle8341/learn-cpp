#include "starter.h"


#ifdef RELATION_OPERATOR


class Person {
public:
	Person(string name, int age) {
		this->name = name;
		this->age = age;
	}

	//重载 ==
	bool operator==(Person& p) {
		return this->name == p.name && this->age == p.age;
	}

	//重载 !=
	bool operator!=(Person& p) {
		return this->name != p.name || this->age != p.age;
	}


	string name;
	int age;

};

void test01() {
	Person p1("lyle", 20);
	Person p2("lyle2", 20);
	if (p1 == p2) {
		cout << "p1和p2相等" << endl;
	}
	else {
		cout << "p1和p2不相等" << endl;
	}
}


int main() {
	test01();

	return 0;
}
#endif // RELATION_OPERATOR
