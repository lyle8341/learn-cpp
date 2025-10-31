#include "starter.h"

//TODO 数组指针细节

#ifdef C_ARR_POINTER


//TODO 1.arr参与计算的时候，会退化为第一个元素的指针

//TODO 特殊情况：
	//1. sizeof 运算的时候，不会退化，arr还是整体
	//2. &arr 获取地址的时候，不会退化

int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

	//sizeof 运算的时候，不会退化，arr还是整体
	printf("%zu\n", sizeof(arr));

	//TODO &arr不会退化，记录的是首地址。			步长：数据类型*数组长度 40
	//TODO arr参与计算会退化为第一个元素的指针。	步长：数据类型

	printf("%p\n", arr);
	printf("%p\n", &arr);

	printf("%p\n", arr + 1);
	printf("%p\n", &arr + 1);//跳过整个数组，应用场景见 数组/c_二维数组.c

	return 0;
}
#endif // C_ARR_POINTER