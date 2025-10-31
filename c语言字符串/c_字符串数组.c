#include "starter.h"

#ifdef C_STRING_ARR


void type_1() {
	//定义一个数组存储5个学生的名字
	char stu[5][100] = {
		"lyle",
		"joey",
		"john",
		"trump",
		"ladybird"
	};
	for (int i = 0; i < 5; i++)
	{
		//char* temp = stu[i];
		printf("%s\n", stu[i]);
	}

	printf("----------- 指针方式遍历 -----------\n");
	char(*p)[100] = stu;
	for (int i = 0; i < 5; i++)
	{
		printf("%s\n", *p);
		p++;
	}
}

void type_2() {
	char* arr[5] = {
		"lyle",
		"joey",
		"john",
		"trump",
		"ladybird"
	};

	for (int i = 0; i < 5; i++)
	{
		printf("%s\n", arr[i]);
	}

	printf("----------- 指针方式遍历 -----------\n");
	char** p = arr;
	for (int i = 0; i < 5; i++)
	{
		printf("%s\n", *p);
		p++;
	}
}

int main() {
	type_1();
	type_2();
	return 0;
}
#endif // C_STRING_ARR