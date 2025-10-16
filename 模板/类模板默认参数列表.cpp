#include "starter.h"

#ifdef CLASS_TEMPLATE_DEFAULT_PARAMS

//TODO ��ģ����ģ������б��п�����Ĭ�ϲ���
template<class NameType = string, class AgeType = int>
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
	Person<> p1("lyle", 20);
	p1.print();
}

int main() {
	test01();
	return 0;
}
#endif // CLASS_TEMPLATE_DEFAULT_PARAMS