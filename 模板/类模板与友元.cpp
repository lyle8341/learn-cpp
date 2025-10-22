#include "starter.h"


#ifdef CLASS_TEMPLATE_FRIEND

template<class T1, class T2>
class Person;

//类外实现
template<class T1, class T2>
void printPerson2(Person<T1, T2> p) {
	cout << "类外实现--> " << "姓名: " << p.name << " 年龄: " << p.age << endl;
}

template<class T1, class T2>
class Person {
public:
	Person(T1 name, T2 age) {
		this->name = name;
		this->age = age;
	}
	//全局函数，类内实现（简单）
	friend void printPerson(Person<T1, T2> p) {
		cout << "类内实现--> " << "姓名: " << p.name << " 年龄: " << p.age << endl;
	}

	//全局函数 类外实现
	//TODO 加空模板参数列表
	//TODO 如果全局函数是类外实现，需要让编译器提前知道这个函数的存在
	friend void printPerson2<>(Person<T1, T2> p);

private:
	T1 name;
	T2 age;
};

//1. 全局函数 类内实现
void test01() {
	Person<string, int> p("lyle", 30);
	//TODO 模板类的特殊性
	//TODO ADL(参数依赖查找)查找机制
	//TODO 隐式生成具有外部链接的函数

	//验证不是全局函数
		//方式一、普通类（非模板类）
		//方式二、显示调用(::printPerson())
	printPerson(p);//不是真正的全局函数
}

void test02() {
	Person<string, int> p("lyle", 30);
	printPerson2(p);
}

int main() {
	test01();
	test02();
	return 0;
}

#endif // CLASS_TEMPLATE_FRIEND