#include "starter.h"


#ifdef CLASS_TEMPLATE

//TODO ��ģ��û���Զ��Ƶ���ʽ��������ʾָ��



//��ģ��
template<class NameType, class AgeType>
class Person {
public:
	Person(NameType name, AgeType age) {
		this->name = name;
		this->age = age;
	}

	void print() {
		cout << "����: " << name << "\t����: " << age << endl;
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