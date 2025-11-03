#include "starter.h"

#ifdef C_SECONDARY_POINTER
int main() {
	//二级指针作用

	int a = 10;
	int b = 20;

	//定义一级指针
	int* p = &a;

	//定义二级指针
	int** pp = &p;

	//TODO 1.利用二级指针修改一级指针里面记录的内存地址
	*pp = &b;

	printf("%p\n", &a);
	printf("%p\n", &b);
	printf("%p\n", p);

	//TODO 2.利用二级指针获取到变量中记录的数据
	printf("%d\n", **pp);


	//利用二级指针获取hij中的i
	char* a[] = { "abc", "def", "hij" };
	char** p = a;
	printf("%c\n", *(*(p + 2) + 1));
	printf("%c\n", a[2][1]);
	printf("%c\n", p[2][1]);

	return 0;
}
#endif // C_SECONDARY_POINTER