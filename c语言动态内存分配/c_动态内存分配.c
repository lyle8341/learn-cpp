#include "starter.h"

#ifdef C_COMMON_FUNCTION

//效率更高
void test_malloc() {
	//1.malloc申请一片连续的空间
	int* p = malloc(10 * sizeof(int));
	printf("%p\n", p);
	//2.赋值
	if (p != NULL) {
		for (int i = 0; i < 10; i++)
		{
			//第一种赋值
			*(p + i) = (i + 1) * 10;
			//第二种赋值(方括号形式会解析成 *(p+i) 或 *(i+p))
			//p[i] = (i + 1) * 10;
			//i[p] = (i + 1) * 10;
		}
		//3.遍历
		for (int i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i));
		}
		printf("\n");
	}
	//4.扩容 20个int类型的整数
	int* tmp = realloc(p, 20 * sizeof(int));
	if (tmp == NULL) {//扩容失败
		printf("realloc failed!\n");
		free(p);
		return;
	}
	//realloc 成功，更新指针
	p = tmp;

	for (int i = 0; i < 20; i++)
	{
		printf("%d ", *(p + i));
	}
	printf("\n");
	free(p);
}

//申请空间 + 数据初始化
void test_calloc() {
	int* p = calloc(10, sizeof(int));
	if (p != NULL) {
		for (int i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i));
		}
		printf("\n");
	}
}

//malloc申请的空间过多，会产生虚拟内存
void generate_virtual_mem() {
	int size = 1024 * 1024 * 1024;
	int times = 0;
	while (1)
	{
		int* p = malloc(size);
		times++;
		if (p == NULL) {
			printf("申请失败\n");
			break;
		}
		printf("内存第%d次申请成功: %p\n", times, p);
	}
}

int main() {
	// malloc	memory allocation		申请空间（连续）
	// calloc	contiguous allocation	申请空间+数据初始化
	// realloc	re-allocation			扩容：如果成功且返回了新的地址，那么原来的那块内存会被自动释放
										//如果无法分配新的空间，原来的指针不变
										//"永远不要对旧指针和新指针同时free"
	// free		free					释放空间
	//test_malloc();
	//test_calloc();
	//generate_virtual_mem();

	return 0;
}
#endif // C_COMMON_FUNCTION