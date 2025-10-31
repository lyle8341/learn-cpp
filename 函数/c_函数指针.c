#include "starter.h"

#ifdef C_FUNCTION_POINTER


//TODO 格式:		返回值类型 (*指针名) (形参列表)
//作用： 利用函数指针，可以动态的调用函数



void method1() {
	printf("method1\n");
}

int method2(int a, int b) {
	printf("method2\n");
	return a + b;
}

int main() {
	//1. 定义两个指针指向函数
	void (*p1)() = method1;
	int (*p2)(int, int) = method2;

	//2. 利用函数指针调用函数
	p1();
	int num = p2(3, 4);
	printf("%d\n", num);






	return 0;
}
#endif // C_FUNCTION_POINTER