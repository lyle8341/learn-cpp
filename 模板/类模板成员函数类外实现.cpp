#include "starter.h"

#ifdef CLASS_TEMPLATE_METHOD_OUTSIDE

template<class T1, class T2>
class Person {
public:
	Person(T1 name, T2 age);
	void showPerson();
	T1 name;
	T2 age;
};

//TODO ��ģ�幹�캯��������ʵ��
template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age) {
	this->name = name;
	this->age = age;
}
//TODO ��ģ���Ա����������ʵ��
template<class T1, class T2>
void Person<T1, T2>::showPerson() {
	cout << "����: " << this->name << " ����: " << this->age << endl;
}

int main() {
	Person<string, int> p("lyle", 30);
	p.showPerson();
	return 0;
}
#endif // CLASS_TEMPLATE_METHOD_OUTSIDE