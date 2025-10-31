//#define _CRT_SECURE_NO_WARNINGS  //放在第一行
#include "starter.h"

#ifdef C_KEYBOARD_INPUT

//TODO scanf中不能有\n
int main() {
	// scanner format
	int a;
	printf("请输入一个整数");
	//scanf("%d", &a);
	scanf_s("%d", &a);

	printf("a = %d\n", a);

	//字符串录入
	char str[100];
	printf("请输入人名：\n");
	scanf_s("%s", str, (unsigned)sizeof(str));
	printf("姓名:%s\n", str);

	int x, y;
	scanf_s("%d %d", &x, &y);
	printf("x + y = %d\n", x + y);

	return 0;
}
#endif // C_KEYBOARD_INPUT
