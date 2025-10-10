#include <iostream>
#include "starter.h"

using namespace std;


#ifdef FUNCTION_PLACEHOLDER

//语法: 返回值类型 函数名 (数据类型) {}

void func(int a, int) {
	cout << "this is func" << endl;
}


void func2(int a, int b = 20) {
	cout << "this is func2" << endl;
}

int main() {
	func(10, 10);//占位参数必须填补
	func2(15);
	return 0;
}

#endif // FUNCTION_PLACEHOLDER
