#include "starter.h"


#ifdef POINTER_DEFINE

int main() {
	//1.定义指针
	int a = 10;
	//指针定义的语法： 数据类型* 指针变量名;
	int* p = &a;
	cout << "a的地址为:\t" << &a << endl;
	cout << "指针p为:\t" << p << endl;

	//2.使用指针，可以通过解引用的方式来找到指针指向的内存
	*p = 900;

	cout << "a = " << a << endl;
	cout << "*p = " << *p << endl;

	return 0;
}


#endif // POINTER_DEFINE
