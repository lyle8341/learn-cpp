#include "starter.h"

#ifdef FUNCTION_RETURN_ARR

//TODO 由于数组对象本身是第一个元素的地址，所以返回数组本质上就是返回指针
int* func1() {
	static int arr[] = { 1,2,3 };
	return arr;
}

int* func2() {
	int* arr = new int[3]{ 1,2,3 };
	return arr;
}

int arr[] = { 1,2,3 };//全局，不推荐

int* func3() {
	//....
	return arr;
}

//推荐
void plus_one_in_arr(int* arr, const int length) {
	for (int i = 0; i < length; i++)
	{
		arr[i] = i + 1;
	}
}


//TODO 不推荐函数返回数组，因为要么手动delete，要么static一直占内存，要么全局变量
//TODO 推荐：在函数外创建数组，传入函数（地址或引用传递），进行操作即可


int main() {

	int arr[3];//函数外创建
	plus_one_in_arr(arr, 3);

	for (int i = 0; i < 3; i++)
	{
		cout << arr[i] << endl;
	}
	return 0;
}
#endif // FUNCTION_RETURN_ARR