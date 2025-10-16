#include "starter.h"


#ifdef ORDINARY_FUNCTION_TEMPLATE
//TODO 普通函数可以发生隐式类型转换，模板函数只有显示方式才可以发生隐式转换

int myadd(int a, int b) {
	return a + b;
}

template<class T>
int	add(T a, T b) {
	return a + b;
}

void test01() {
	int a = 2;
	int b = 4;
	cout << "普通函数: " << myadd(a, b) << endl;

	//TODO 隐式类型转换
	char c = 'a';
	cout << "普通函数隐式转换: " << myadd(a, c) << endl;
}

void test02() {
	int a = 6;
	int b = 4;
	cout << "模板函数: " << add(a, b) << endl;

	char c = 'a';
	//显示方式才可以隐式转换
	cout << "模板函数: " << add<int>(a, c) << endl;
}

int main() {
	test01();
	test02();
	return 0;
}

#endif // ORDINARY_FUNCTION_TEMPLATE