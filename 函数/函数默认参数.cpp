#include <iostream>
#include "starter.h"

using namespace std;

#ifdef FUNCTION_DEFAULT_PARAM

//语法: 返回值类型 函数名 (参数=默认值)

//如果我们自己传入数据，就用自己的数据，如果没有传递，则使用默认值
int func(int a, int b = 10, int c = 20) {
	return a + b + c;
}

// 1.默认参数必须在参数列表的结尾
//int func2(int a, int b = 10, int c) {
//	return a + b + c;
//}


// 2.如果函数声明有默认参数，函数实现就不能有默认参数
// 声明和实现只能有一个有默认参数

int main() {
	cout << func(10) << endl;
	cout << func(10, 40) << endl;
	cout << func(10, 40, 50) << endl;
	return 0;
}
#endif // FUNCTION_DEFAULT_PARAM
