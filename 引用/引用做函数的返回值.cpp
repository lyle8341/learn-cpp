#include "starter.h"


#ifdef REFERENCE_AS_RETURN

//引用做函数的返回值
//1. 不要返回局部变量的引用
int& test01() {
	int a = 10; //局部变量存放在四区中的栈
	return a;
}


//2. 函数的调用可以作为左值
int& test02() {
	static int a = 10;//静态变量，存放在全局区，在程序结束后系统释放
	return a;
}


int main() {
	//int& ref = test01();//错误做法

	int& ref = test02();

	//函数的调用可以作为左值
	//如果函数作左值，那么必须返回引用，引用，引用
	test02() = 2000;

	return 0;
}
#endif // REFERENCE_AS_RETURN
