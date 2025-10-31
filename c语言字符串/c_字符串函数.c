#include "starter.h"

#ifdef C_STRING_FUNCTION

int main() {
	char* str1 = "abc";
	char str2[100] = "abc";
	char str3[5] = { 'a','b','c','d','\0' };

	printf("------------- strlen(长度) -------------\n");
	//strlen 是不计算结束标记的
	//默认情况下，一个中文占两个字节
	/*printf("%d\n", strlen(str1));
	printf("%d\n", strlen(str2));
	printf("%d\n", strlen(str3));*/

	printf("------------- strcat(拼接) -------------\n");
	//把第二个参数的内容拷贝到第一个参数的末尾
	//前提1：第一个字符串是可以被修改的
	//前提2：第一个字符串中剩余空间可以容纳拼接的字符串
	//strcat(str2, str3);
	//printf("%s\n", str2);//abcabcd
	//printf("%s\n", str3);//abcd

	printf("------------- strcpy(拷贝) -------------\n");
	//把参数二的内容拷贝到参数一，覆盖原内容
	//前提1：第一个字符串是可以被修改的
	//前提2：第一个字符串的空间可以容纳第二个字符串的内容
	//strcpy(str2, str3);
	//printf("%s\n", str2);//abcd
	//printf("%s\n", str3);//abcd

	printf("------------- strcmp(比较) -------------\n");
	//顺序和内容一样才算一样
	/*int res = strcmp(str1, str2);
	printf("%d\n", res);*/

	printf("------------- strlwr(小写) -------------\n");
	/*_strlwr(str2);
	printf("%s\n", str2);*/

	printf("------------- strupr(大写) -------------\n");
	//_strupr(str2);
	//printf("%s\n", str2);

	return 0;
}

#endif // C_STRING_FUNCTION