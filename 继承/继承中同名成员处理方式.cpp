#include "starter.h"


#ifdef EXTEND_SAME_NAME_FIELD

class Base {
public:
	Base() {
		age = 99;
	}

	void getName() {
		cout << "张翠山" << endl;
	}
	int age;
};

class Son :public Base {
public:
	Son() {
		age = 50;
	}

	void getName() {
		cout << "张无忌" << endl;
	}
	int age;
};

int main() {
	Son s;
	//访问父类同名成员
	cout << "父类同名属性值: " << s.Base::age << endl;
	cout << "子类同名属性值: " << s.age << endl;

	//父类同名函数
	s.Base::getName();
	//子类同名函数
	s.getName();

	//TODO 如果子类中出现和父类同名的成员函数，子类的同名成员会隐藏父类中所有同名成员函数
	//如果需要访问，加上 "作用域"

	return 0;
}


#endif // EXTEND_SAME_NAME_FIELD
