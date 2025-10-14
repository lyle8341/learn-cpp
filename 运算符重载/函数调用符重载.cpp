#include "starter.h"

#ifdef FUNCTION_INVOKE_OPERATOR

//函数调用运算符 () 也可以重载
//TODO 由于重载后使用方式非常像函数的调用，因此称为仿函数
//仿函数没有固定写法，非常灵活

class MyPrint {
public:
	void operator()(string text) {
		cout << text << endl;
	}

};

void myPrint02(string text) {
	cout << text << endl;
}

void test01() {
	MyPrint myPrint;
	myPrint("hello");
	myPrint02("world");
}


class Myadd {

public:
	int operator()(int a, int b) {
		return a + b;
	}

};

void test02() {
	Myadd ma;
	int result = ma(12, 28);
	cout << "ret = " << result << endl;

	//见 Project(类和对象)中 构造函数的分类及调用.cpp
	//TODO 匿名函数对象调用
	cout << Myadd()(100, 200) << endl;

}

int main() {
	test01();
	test02();
	return 0;
}
#endif // FUNCTION_INVOKE_OPERATOR
