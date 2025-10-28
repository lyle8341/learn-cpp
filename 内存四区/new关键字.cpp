#include "starter.h"


#ifdef HOW_TO_USE_NEW

int* func() {
	return new int(20);//创建一个变量
}

void test01() {
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	//释放堆区的数据
	delete p;
}

void test02() {
	//创建10个整形的数组在堆区
	int* arr = new int[10];
	int* init = arr;//赋值用
	int* read = arr;//遍历用
	for (int i = 0; i < 10; i++)
	{
		*init++ = i + 100; // arr指针已经移动了，后面不能再用来读数据了
	}
	for (int i = 0; i < 10; i++)
	{
		cout << *read++ << endl;
	}
	//释放数组
	//如果指针移动了，此处将会报错
	delete[] arr;
}

int main() {
	//test01();
	test02();
	return 0;
}

#endif // HOW_TO_USE_NEW