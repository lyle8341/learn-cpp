#include "starter.h"


#ifdef ARRAY_TEST

int main() {

	//三种定义方式
	//1. 数据类型 数组名[数组长度]
	int arr[5];
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		cout << arr[i] << endl;
	}

	//2. 数据类型 数组名[数组长度] = {值1, 值2, 值3 ... };
	int arr2[10] = { 12, 34, 35, 78, 96 };
	for (int i = 0; i < sizeof(arr2) / sizeof(int); i++)
	{
		cout << arr2[i] << endl;
	}

	//3. 数据类型 数组名[] = {值1, 值2, 值3 ... };
	int arr3[] = { 12, 89, 56, 45, 213, 89, 41 };
	for (int i = 0; i < sizeof(arr3) / sizeof(int); i++)
	{
		cout << arr3[i] << endl;
	}
	return 0;
}

#endif // ARRAY_TEST
