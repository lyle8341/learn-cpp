#include <iostream>
#include "starter.h"
#include <ctime>

using namespace std;

#ifdef TWO_DIMENSIONAL_ARRAY

int main() {
	//添加随机数种子
	srand((unsigned int)time(NULL));
	//二维数组定义的四种方式


	//	1. 数据类型 数组名[行数][列数];
	int arr[2][3];
	for (int r = 0; r < sizeof(arr) / sizeof(arr[0]); r++) //行数
	{
		for (int c = 0; c < sizeof(arr[0]) / sizeof(arr[0][0]); c++)//列数
		{
			arr[r][c] = rand() % 100 + 1;
			cout << arr[r][c] << endl;
		}
	}

	// *2. 数据类型 数组名[行数][列数] = {{数据1, 数据2...}, {数据x， 数据y...}, ...};
	int arr2[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};

	//	3. 数据类型 数组名[行数][列数] = {数据1, 数据2, 数据3, 数据4};
	int arr3[2][3] = { 4, 5, 6, 7, 8 };



	//	4. 数据类型 数组名[][列数] = {数据1, 数据2, 数据3, 数据4};
	int arr4[][3] = { 1,2,3,4,5,6,7 };



	return 0;
}

#endif // TWO_DIMENSIONAL_ARRAY
