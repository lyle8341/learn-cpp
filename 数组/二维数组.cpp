#include <iostream>
#include "starter.h"
#include <ctime>

using namespace std;

#ifdef TWO_DIMENSIONAL_ARRAY

int main() {
	//������������
	srand((unsigned int)time(NULL));
	//��ά���鶨������ַ�ʽ


	//	1. �������� ������[����][����];
	int arr[2][3];
	for (int r = 0; r < sizeof(arr) / sizeof(arr[0]); r++) //����
	{
		for (int c = 0; c < sizeof(arr[0]) / sizeof(arr[0][0]); c++)//����
		{
			arr[r][c] = rand() % 100 + 1;
			cout << arr[r][c] << endl;
		}
	}

	// *2. �������� ������[����][����] = {{����1, ����2...}, {����x�� ����y...}, ...};
	int arr2[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};

	//	3. �������� ������[����][����] = {����1, ����2, ����3, ����4};
	int arr3[2][3] = { 4, 5, 6, 7, 8 };



	//	4. �������� ������[][����] = {����1, ����2, ����3, ����4};
	int arr4[][3] = { 1,2,3,4,5,6,7 };



	return 0;
}

#endif // TWO_DIMENSIONAL_ARRAY
