#include "starter.h"

#ifdef CLASS_TEMPLATE_AS_FUNCTION_PARAM


//类模板实例化处的对象，向函数传参的方式
	//1.指定传入的类型
	//2.参数模板化
	//3.整个类模板化

template<class T1, class T2>
class Person {
public:
	Person(T1 name, T2 age) {
		this->name = name;
		this->age = age;
	}

	void showPerson() {
		cout << "姓名: " << this->name << " 年龄: " << this->age << endl;
	}

	T1 name;
	T2 age;
};

//TODO *1.指定传入的类型
void printPerson_a(Person<string, int>& p) {
	p.showPerson();
}
//TODO 2.参数模板化
template<class T1, class T2>
void printPerson_b(Person<T1, T2>& p) {
	p.showPerson();
	//TODO 查看模板具体类型
	cout << "T1的类型为: " << typeid(T1).name() << endl;
	cout << "T2的类型为: " << typeid(T2).name() << endl;
}
//TODO 3.整个类模板化
template<class T>
void printPerson_c(T& p) {
	p.showPerson();
	cout << "T的类型为: " << typeid(T).name() << endl;
}

void test01() {
	Person<string, int> p("孙悟空", 600);
	printPerson_a(p);
	printPerson_b(p);
	printPerson_c(p);
}

int main() {
	test01();
	return 0;
}
#endif // CLASS_TEMPLATE_AS_FUNCTION_PARAM