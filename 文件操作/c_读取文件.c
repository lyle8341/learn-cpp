#include "starter.h"

#ifdef C_READ_FILE

//TODO 相对路径： 相对当前项目

//每次都一个字符，读完
void read_by_a_char(FILE* const file) {
	//如果读到了就返回读取到的字符，读不到返回-1
	int c;
	while ((c = fgetc(file)) != EOF)
	{
		printf("%c", c);
		//putchar(c);
	}
	printf("\n");
}

//读一行，以换行符为准
//如果读不到返回NULL
//TODO fgets 从文件流中读取最多 MaxCount​-1个字节，遇到换行或文件结束时停止，然后在末尾自动加 '\0'
void read_a_line(FILE* const file) {
	char buffer[1024];
	//TODO strlen 以\0计算长度，故而此时数据怪异，fgets后有内容(\0)，计算正常
	printf("======== %d =======\n", strlen(buffer));

	printf("buffer地址:\t%p\n", buffer);

	char* str1 = fgets(buffer, sizeof(buffer), file);
	printf("%d %s", strlen(buffer), buffer);
	printf("str1地址:\t%p\n", str1);

	char* str2 = fgets(buffer, sizeof(buffer), file);
	printf("%d %s", strlen(buffer), buffer);
	printf("str2地址:\t%p\n", str2);

	char* str3 = fgets(buffer, sizeof(buffer), file);
	printf("%d %s", strlen(buffer), buffer);
	printf("str3地址:\t%p\n", str3);

	//TODO fgets 返回值就是buffe的地址。所有打印buffer中的内容和打印返回值是一模一样的操作
	//TODO fgets 返回值就是buffe的地址。所有打印buffer中的内容和打印返回值是一模一样的操作
	//TODO fgets 返回值就是buffe的地址。所有打印buffer中的内容和打印返回值是一模一样的操作
}

//每次读一行，读完
void read_by_a_line(FILE* const file) {
	char buffer[1024];
	char* tmp;
	while ((tmp = fgets(buffer, sizeof(buffer), file)) != NULL)
	{
		printf("%s", tmp);
	}
}

//TODO fread 只是"原样地"把文件字节块读进内存，不会！不会自动加字符串结束符
void read_multi(FILE* const file) {
	char buffer[1024];

	//第二个参数 ElementSize​ 接收数组中每个元素占几个字节
	int n = fread(buffer, 1, sizeof(buffer), file);//读到的字节个数

	//手动加字符串结束符
	buffer[n] = '\0';

	printf("读取字节数:%d\n%s\n", n, buffer);
}

//TODO 正确判断文件是否结束
void judge_end(FILE* const fp) {
	//方法一，先读，再判断
	int ch;
	while ((ch = fgetc(fp)) != EOF) {
		putchar(ch);
	}

	//方法二
	char buf[1024];
	size_t n;
	while ((n = fread(buf, 1, sizeof(buf), fp)) > 0) {
		// 处理 buf 中 n 个字节
	}

	//TODO 只有你调用一次 fread / fgetc / fgets，发现已经没得读了，系统才会把EOF标记设为真，然后此时 feof(fp) 才返回true
}


int main() {

	//1.打开文件
	FILE* file = NULL;   // 文件指针
	errno_t err = fopen_s(&file, "text.txt", "r");
	//errno_t err = fopen_s(&file, "../README.md", "r");

	//2.读取数据
	if (err != 0 || file == NULL) {
		printf("无法打开文件！\n");
		perror("错误信息");
		return -1;
	}
	//read_a_char(file);
	//read_a_line(file);
	//read_by_a_line(file);
	read_multi(file);


	fclose(file);
	return 0;
}

#endif // C_READ_FILE