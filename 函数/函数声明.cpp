#include <iostream>
#include "starter.h"

using namespace std;


#ifdef FUNCTION_DECLARE

//函数的声明可以多次，但是函数的定义只能有一次

//声明。提前告诉编译器函数的存在
int max(int a, int b);
int max(int a, int b);

int main() {
	int a = 45;
	int b = 876;
	cout << max(a, b) << endl;
	return 1;
}

//定义
int max(int a, int b) {
	return a > b ? a : b;
}

#endif // FUNCTION_DECLARE
