#include "starter.h"


#ifdef REFERENCE_BASE

//引用的作用： 给变量起别名
//语法： 数据类型 &别名 = 原名

int main() {
	int a = 10;
	int& b = a;

	//sizeof 操作符作用于引用时，返回的是引用对象的大小，而不是引用本身的大小。
	cout << "sizeof(a) = " << sizeof(a) << endl;
	cout << "sizeof(b) = " << sizeof(b) << endl;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	b = 100;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

}

#endif // REFERENCE_BASE