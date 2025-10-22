#include "starter.h"


#ifdef MEM_FOUR_REGION_GLOBAL

//全局变量
int g_a = 10;
int g_b = 10;

const int c_g_a = 10;
const int c_g_b = 10;

int main() {
	//普通局部变量
	int a = 10;
	int b = 10;
	cout << "局部变量a的地址为:\t" << (long long)&a << endl;
	cout << "局部变量b的地址为:\t" << (long long)&b << endl;

	cout << "全局变量g_a的地址为:\t" << (long long)&g_a << endl;
	cout << "全局变量g_b的地址为:\t" << (long long)&g_b << endl;

	//静态变量
	static int s_a = 10;
	static int s_b = 10;
	cout << "静态变量g_a的地址为:\t" << (long long)&s_a << endl;
	cout << "静态变量g_b的地址为:\t" << (long long)&s_b << endl;

	//常量
	//字符串常量
	cout << "字符串常量的地址为:\t" << (long long)&"Hello World" << endl;

	//const修饰的变量
	//const修饰的全局变量
	cout << "const修饰全局变量c_g_a:\t" << (long long)&c_g_a << endl;
	cout << "const修饰全局变量c_g_b:\t" << (long long)&c_g_b << endl;

	//const修饰的局部变量 局部 局部 和普通局部在一起
	const int c_l_a = 10;
	const int c_l_b = 10;
	cout << "const修饰局部常量c_l_a:\t" << (long long)&c_l_a << endl;
	cout << "const修饰局部常量c_l_b:\t" << (long long)&c_l_b << endl;

	return 0;
}

#endif // MEM_FOUR_REGION_GLOBAL
