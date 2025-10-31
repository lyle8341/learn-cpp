#include "starter.h"


#ifdef C_ROLE_OF_POINTER

//TODO 1.操作其他函数中的变量
void mySwap(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

//错误搞法
int* method() {
	int a = 30;
	return &a;
}

int* method2() {
	static int a = 30; //此时变量一直保存到程序结束
	return &a;
}

//TODO 2.函数返回多个值
void getMaxAndMin(int arr[], int len, int* pmax, int* pmin) {
	//求最大值
	*pmax = arr[0];
	*pmin = arr[0];

	for (int i = 1; i < len; i++)
	{
		if (arr[i] > *pmax) {
			*pmax = arr[i];
		}
		if (arr[i] < *pmin) {
			*pmin = arr[i];
		}
	}
}

//TODO 3.函数的结果和计算状态分开
//返回值：表示计算的状态 0:正常 1:不正常
int getRemainder(int a, int b, int* res) {
	if (b == 0) {
		//
		return 1;
	}
	*res = a % b;
	return 0;
}


//TODO 指针的作用
int main() {
	int a = 10;
	int b = 20;
	printf("调用前: %d, %d\n", a, b);
	mySwap(&a, &b);
	printf("调用后: %d, %d\n", a, b);


	//int* p = method();
	int* p = method2();
	printf("模拟其他逻辑，拖点时间\n");
	printf("模拟其他逻辑，拖点时间\n");
	printf("模拟其他逻辑，拖点时间\n");
	printf("%d\n", *p);

	//返回多个值
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int len = sizeof(arr) / sizeof(int);
	int max = arr[0];
	int min = arr[0];

	getMaxAndMin(arr, len, &max, &min);
	printf("最大值: %d\n", max);
	printf("最小值: %d\n", min);


	int m = 10;
	int n = 0;
	int res = 0;
	int flag = getRemainder(m, n, &res);
	//状态判断
	if (!flag) {
		printf("余数: %d\n", res);
	}

	return 0;
}

#endif // C_ROLE_OF_POINTER
