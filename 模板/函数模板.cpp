#include "starter.h"


#ifdef FUNCTION_TEMPLATE

//语法： template<typename T>
	//template 声明创建模板
	//typename 表明其后面的符号是一种数据类型，可以用class代替
	//T 通用的数据类型，通常为大些字母

//函数模板
template<typename T> //声明一个模板，告诉编译器后面代码中紧跟着的T不要报错。
void myswap(T& a, T& b) { //注意函数名于内置冲突!!!
	T temp = a;
	a = b;
	b = temp;
}

int main() {

	int a = 10;
	int b = 20;

	//使用函数模板方式一(自动类型推导)
	myswap(a, b);
	cout << "a = " << a << " b = " << b << endl;

	//使用函数模板方式二(显示指定类型)
	myswap<int>(a, b);

	cout << "a = " << a << " b = " << b << endl;

	return 0;
}
#endif // FUNCTION_TEMPLATE