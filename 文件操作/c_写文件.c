#include "starter.h"

#ifdef C_WRITE_FILE


void write_a_char(FILE* const file) {
	//一次写一个字符，返回写出的字符
	int c = fputc(98, file);
	printf("%c\n", c);
}

void write_string(FILE* const file) {
	char* buffer = "hello world0";
	fputs(buffer, file);
}

//返回写出的字节个数
void write_multi(FILE* const file) {
	char arr[] = { 97,98,99,100,101 };
	int outCount = fwrite(arr, 1, 5, file);
	printf("%d\n", outCount);
}

int main() {
	//1.打开文件
	FILE* file = NULL;   // 文件指针
	errno_t err = fopen_s(&file, "text.txt", "w");
	//errno_t err = fopen_s(&file, "../README.md", "r");

	//2.写数据
	if (err != 0 || file == NULL) {
		printf("无法打开文件！\n");
		perror("错误信息");
		return -1;
	}

	write_a_char(file);
	write_string(file);
	write_multi(file);

	fclose(file);
	return 0;
}
#endif // C_WRITE_FILE