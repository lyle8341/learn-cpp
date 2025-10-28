//#define _CRT_SECURE_NO_WARNINGS  //放在第一行
#include "starter.h"

#ifdef C_KEYBOARD_INPUT

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
	//scanf_s("%s", &str, (unsigned)sizeof(str));
	scanf_s("%s", str, (unsigned)sizeof(str));
	printf("姓名:%s", str);


	return 0;
}
#endif // C_KEYBOARD_INPUT
