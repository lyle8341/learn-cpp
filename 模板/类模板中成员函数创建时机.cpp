#include "starter.h"



#ifdef CLASS_TEMPLATE_FUNCTION_CREATE_TIME

//TODO 普通类中的成员函数一开始就可以创建
//TODO 类模板中的成员函数在调用时才创建，不调用不创建

class Person_1 {
public:
	void showP1() {
		cout << "person_1 show" << endl;
	}
};

class Person_2 {
public:
	void showP2() {
		cout << "person_2 show" << endl;
	}
};

template<class T>
class MyKlass {
public:
	T obj;

	//TODO 类模板中的成员函数调用时才创建，调用时才创建
	void func1() {
		obj.showP1();
	}

	void func2() {
		obj.showP2();
	}
};

int main() {
	MyKlass<Person_1> myKlass;
	myKlass.func1();
	//myKlass.func2();
	return 0;
}
#endif // CLASS_TEMPLATE_FUNCTION_CREATE_TIME