#include "starter.h"


#ifdef C_FUNCTION_POINTER_USE

int add(int a, int b) {
	return a + b;
}

int subtract(int a, int b) {
	return a - b;
}

int multiply(int a, int b) {
	return a * b;
}

int divide(int a, int b) {
	return a / b;
}

int main() {

	//1.定义一个数组装四个函数的指针，函数指针数组
	//TODO 参数列表直接决定了编译器如何压栈（或传寄存器参数），如果不匹配可能导致：栈错位、返回值混乱、某些平台上直接崩溃
	int (*p[4])(int, int) = { add, subtract, multiply, divide };

	//
	printf("请录入两个数字参与计算\n");
	int a;
	int b;
	scanf_s("%d %d", &a, &b);//"%d %d"有无空格没有影响
	printf("a = %d\n", a);
	printf("b = %d\n", b);

	printf("和: %d\n", p[0](a, b));
	printf("差: %d\n", p[1](a, b));
	printf("积: %d\n", p[2](a, b));
	printf("商: %d\n", p[3](a, b));
	printf("mix: %d\n", p[4](a, b, 4));

	return 0;
}

#endif // C_FUNCTION_POINTER_USE