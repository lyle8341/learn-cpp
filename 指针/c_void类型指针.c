#include "starter.h"

#ifdef C_VOID_POINTER

/// <summary>
/// 交换数据
/// </summary>
/// <param name="a"></param>
/// <param name="b"></param>
/// <param name="len">指针类型对应的字节数</param>
void myswap(void* a, void* b, int len) {
	//把void类型指针转成char类型指针
	char* pca = a;
	char* pcb = b;

	char temp = 0;
	//以字节为单位，一个字节一个字节的进行交换
	for (int i = 0; i < len; i++)
	{
		temp = *pca;
		*pca = *pcb;
		*pcb = temp;
		pca++;
		pcb++;
	}
}

int main() {

	int a = 10;
	short s = 20;

	int* pa = &a;
	short* ps = &s;

	//void 类型指针
	void* p1 = pa;
	void* p2 = ps;

	//不同类型的指针之间，是不能互相赋值的
	//void 没有任何类型，好处可以接受任意类型指针记录的内存地址
	//缺点: void类型指针，无法获取变量里面的数据，也不能进行加减的计算
	//printf("%d\n", *p1);


	int x = 89;
	int y = 78;
	printf("交换前:x = %d, y = %d\n", x, y);
	myswap(&x, &y, sizeof(int));
	printf("交换后:x = %d, y = %d\n", x, y);

	long long m = 189L;
	long long n = 278L;
	printf("交换前:m = %lld, n = %lld\n", m, n);
	myswap(&m, &n, sizeof(long long));
	printf("交换后:m = %lld, n = %lld\n", m, n);

	return 0;
}
#endif // C_VOID_POINTER