#include "starter.h"


#ifdef ARRAY_TEST

int main() {

	//���ֶ��巽ʽ
	//1. �������� ������[���鳤��]
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

	//2. �������� ������[���鳤��] = {ֵ1, ֵ2, ֵ3 ... };
	int arr2[10] = { 12, 34, 35, 78, 96 };
	for (int i = 0; i < sizeof(arr2) / sizeof(int); i++)
	{
		cout << arr2[i] << endl;
	}

	//3. �������� ������[] = {ֵ1, ֵ2, ֵ3 ... };
	int arr3[] = { 12, 89, 56, 45, 213, 89, 41 };
	for (int i = 0; i < sizeof(arr3) / sizeof(int); i++)
	{
		cout << arr3[i] << endl;
	}
	return 0;
}

#endif // ARRAY_TEST
