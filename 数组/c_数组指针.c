#include "starter.h"

#ifdef C_ARR_POINTER


//一维数组指针
void one_dimensional_arr() {
	int arr[] = { 10,20,30,40,50 };
	int len = sizeof(arr) / sizeof(int);

	//TODO 获取数组指针
	//TODO 数据类型 * 指针名 = arr;   //数据类型指的是数组中元素的类型
	int* p = arr;
	//int* p2 = &arr[0];

	for (int i = 0; i < len; i++)
	{
		printf("%d ", *p++);
	}
	printf("\n");
}

//数组指针细节
void arr_ptr_detail() {
	//TODO 1.arr参与计算的时候，会退化为第一个元素的指针

	//TODO 特殊情况：
		//1. sizeof 运算的时候，不会退化，arr还是整体
		//2. &arr 获取地址的时候，不会退化

	int arr[] = { 1,2,3,4,5 };

	int* p1 = arr;//参与计算
	int* p2 = arr + 1;//参与计算



	//TODO arr参与计算会退化为第一个元素的指针。	步长：数据类型的字节数
	//TODO arr 是"元素指针"
	printf("arr方式偏移字节: %d\n", (int)(arr + 1) - (int)arr);

	//TODO &arr不会退化，记录的是首地址。			步长：数据类型的字节数*数组长度 40
	//TODO &arr 是"数组指针"
	printf("&arr方式偏移字节: %d\n", (int)(&arr + 1) - (int)&arr);//跳过整个数组

	//TODO &arr 的类型是 int(*)[5]  |||==> int[5] * p --> int * p[5] --> int(*p)[5]
	int* pb = &arr; // 其实这里是错误的类型赋值，正确写法应该是下面
	int(*pp)[5] = &arr;

	printf("%p\n", &arr + 1);  // 数组末尾
	printf("%p\n", pp + 1);    // 数组末尾
}

//TODO &arr用途-二维数组中，偏移一整个元素（一个一维数组）
//定义方式一
void define_dimen_arr_1() {
	int arr[3][5] = { //3: 二维数组的长度		5: 一维数组的长度
		{1, 2, 3, 4, 5},
		{6, 7, 8, 9, 0},
		{11,22,33,44,55}
	};
	//定义方式一 >>>>>>>>>> 索引遍历
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	//定义方式一 >>>>>>>>>> 指针遍历
	//TODO 获取数组指针
	//TODO 数据类型 * 指针名 = arr;   //数据类型指的是数组中元素的类型

	//TODO 变形过程如下
	//int[5] * p = arr; //[]一般写在最后
	//int* p[5] = arr; //误以为是数组
	int(*p)[5] = arr;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			//p是二维数组的指针
			//*p是一维数组的指针
			printf("%d ", *(*p + j));
		}
		printf("\n");
		//*p++; //TODO 等于*(p++);
		p++;//二维数组指针，+1，表示指向第二个元素（第二个一维数组）
	}
}

//定义方式二
void define_dimen_arr_2() {
	int arr1[5] = { 1,2,3,4,5 };
	int arr2[5] = { 11,12,13,14,15 };
	int arr3[5] = { 111,112,113,114,115 };
	int* arr[3] = { arr1, arr2, arr3 };//指针数组
	//定义方式二 >>>>>>>>>> 索引遍历
	int len1 = sizeof(arr1) / sizeof(int);
	int len2 = sizeof(arr2) / sizeof(int);
	int len3 = sizeof(arr3) / sizeof(int);

	//存储所有数组长度
	int len[3] = { len1, len2, len3 };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < len[i]; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	//定义方式二 >>>>>>>>>> 指针遍历
	//TODO 获取数组指针
	//TODO 数据类型 * 指针名 = arr;   //数据类型指的是数组中元素的类型
		//数据类型 * 指针名 = arr;
	int** p = arr;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < len[i]; j++)
		{
			printf("%d ", *(*p + j));
		}
		printf("\n");
		p++;
	}
}

void summary() {
	//数组指针： 指向数组的指针
	// eg: int* p = arr;		"元素指针"	步长：int(4字节)
	// eg: int(*p)[5] = &arr;	"数组指针"	步长：int(4字节) * 5 = 20字节

	//指针数组：存放指针的数组
	// eg: int* p[5]


}
int main() {
	//one_dimensional_arr();
	//arr_ptr_detail();
	define_dimen_arr_1();
	define_dimen_arr_2();
	return 0;
}
#endif // C_ARR_POINTER