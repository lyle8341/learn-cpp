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

//TODO 类模板构造函数的类外实现
template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age) {
	this->name = name;
	this->age = age;
}
//TODO 类模板成员函数的类外实现
template<class T1, class T2>
void Person<T1, T2>::showPerson() {
	cout << "姓名: " << this->name << " 年龄: " << this->age << endl;
}

int main() {
	Person<string, int> p("lyle", 30);
	p.showPerson();
	return 0;
}
#endif // CLASS_TEMPLATE_METHOD_OUTSIDE