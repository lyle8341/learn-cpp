//预处理，程序在运行之前
#include "starter.h"
#include <stdio.h>

#ifdef C_COMMENT
int main() {

	/*
	 * 多行
	 * 注释
	 */
	printf("Hello C Language\n");

	//整数
	printf("%d\n", 19);
	//小数
	printf("%f\n", 3.14);
	//字符
	printf("%c\n", 'X');
	//字符串
	printf("名字：%s\n", "lyle");

	return 0;
}

#endif // C_COMMENT