#include "starter.h"

#ifdef ORDINARY_TEMPLATE_FUNCTION_CALLED

//1.相同情况下，优先调用普通函数
//2.可以通过空模板参数列表 强制调用 模板函数
//3.函数模板可以发生重载
//4.如果函数模板更好匹配，则先调用模板函数

void myprint(int a, int b) {
	cout << "普通函数" << endl;
}

template<class T>
void myprint(T a, T b) {
	cout << "模板函数" << endl;
}

template<class T>
void myprint(T a, T b, T c) {
	cout << "重载模板函数" << endl;
}

//优先调用普通函数
void test01() {
	int a = 1;
	int b = 2;
	myprint(a, b);
}

//强制调用模板函数
void test02() {
	int a = 1;
	int b = 2;
	myprint<>(a, b);
}

//模板函数重载
void test03() {
	int a = 1;
	int b = 2;
	int c = 3;
	myprint<>(a, b, c);
}

int main() {
	//test01();
	//test02();
	test03();
	return 0;
}
#endif // ORDINARY_TEMPLATE_FUNCTION_CALLED