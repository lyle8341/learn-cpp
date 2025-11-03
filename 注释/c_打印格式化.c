#include <stdio.h>
#include "starter.h"

#ifdef C_FORMAT_SPECIFIER


int main() {
	int a = 3;
	// int
	printf("%d\n", -10);
	printf("%i\n", -10);
	// unsigned int
	printf("%u\n", 10);
	// 无符号八进制（不带前导 0）
	printf("%o\n", 10);
	//无符号十六进制（小写 a–f）进制
	printf("%x\n", 255);
	// 无符号十六进制（大写 A–F）
	printf("%X\n", 255);
	//输出单个字符
	printf("%c\n", 'A');
	//输出字符串
	printf("%s\n", "hello");
	//输出浮点数（小数形式） 
	printf("%f\n", 3.14);
	//科学计数法形式
	printf("%e\n", 314.0);
	//根据值自动选择 `%f` 或 `%e`
	printf("%g\n", 3.14);
	//输出指针地址
	printf("%p\n", &a);
	//输出一个 `%` 字符
	printf("100%%\n");

	//占 5 列右对齐 
	printf("%5d\n", 42);
	//占 5 列左对齐
	printf("%-5d\n", 42);
	//不足 5 位时前面补 0
	printf("%05d\n", 42);
	//保留 2 位小数
	printf("%.2f\n", 3.14159);
	//占 8 位，保留 2 位小数
	printf("%8.2f\n", 3.14);


	// short			%hd\n
	// long				%ld\n
	// long long		%lld\n
	// long double		%Lf\n
	// size_t			%zu\n
	// ptrdiff_t		%td\n
	// intmax_t			%jd\n
	printf("=============================\n");

	printf("%#x\n", 255);   // 输出 0xff
	printf("%#o\n", 10);    // 输出 012
	printf("%10s\n", "hi"); // 右对齐字符串
	printf("%-10s\n", "hi");// 左对齐字符串
	printf("%.*f\n", 3, 3.1415926); // 精度通过参数控制 -> 3.142

	printf("============== 常量后缀 ==============\n");
	int b = 00;
	unsigned int c = 100U;
	long d = 100L;
	unsigned long e = 20UL;
	long long f = 399LL;
	unsigned long long g = 200ULL;
	float h = 3.14f; //或 3.14F
	long double i = 3.14L;
	double pi = 3.14;//默认就是double

	return 0;
}



#endif // C_FORMAT_SPECIFIER
