#include "starter.h"

#ifdef C_STRING_DEFINE

// ==================方式一（字符数组+双引号） ==================
void arr_double_quotes() {
	char str0[4] = "abc";
	//TODO 方式一细节:
	// 1.本质存储同 "标准方式"

	// 2.数组的长度，要么不写，要写的话把结束标记的空间预留出来
	//char str2[4] = "good"; // 没有给结束标记预留空间
	//printf("%s\n", str2);

	// 3.字符串内容可以改变
	str0[0] = 'X';
	printf("%s\n", str0);
}

// ================== 方式二（指针+双引号） ==================
void pointer_double_quotes() {
	char* str3 = "nice"; //会检查只读常量区里面有没有nice，如果有不会再创建，直接复用
	//TODO 方式二细节

	// 1.存储同 "标准方式"

	// 2.会把底层的字符数组放在只读常量区，内容不可用修改，字符串可以复用
	//str3[0] = 'Y'; // Exception thrown: write access violation
	//printf("%s\n", str3);

	char* str4 = "nice";

	printf("str3的地址: %p\n", str3);
	printf("str4的地址: %p\n", str3);
}

//键盘录入字符串
void intput_traverse_str() {
	char str[100];
	//TODO !!!不能用这种方式!!!
	//char* str = NULL;

	printf("请录入一个字符串\n");
	scanf_s("%s", str, (unsigned)sizeof(str));
	printf("接收到的字符串: %s\n", str);

	char* p = str;
	while (1) {
		char c = *p;
		if (c == '\0') {//结束标记
			break;
		}
		printf("%c ", c);
		p++;
	}
	printf("\n");




}

int main() {
	//标准方式
	char str1[4] = { 'a','b','c','\0' };

	arr_double_quotes();
	pointer_double_quotes();
	intput_traverse_str();

	//存储特殊字符 \0
	//char question[5] = { '1','2','\\','0', '\0' };
	//printf("%s\n", question);
	return 0;
}
#endif // C_STRING_DEFINE