#include "starter.h"


#ifdef TWO_D_ARRAY_NAME
int main() {

	//1. �鿴ռ���ڴ�ռ��С
	int arr[2][3] =
	{
		{1,2,3},
		{6,7,8}
	};
	cout << "��ά����ռ���ڴ�ռ�Ϊ: " << sizeof(arr) << endl;

	cout << "��ά�����һ��ռ���ڴ�Ϊ: " << sizeof(arr[0]) << endl;

	cout << "��ά�����һ��Ԫ��ռ���ڴ�Ϊ: " << sizeof(arr[0][0]) << endl;


	int rows = sizeof(arr) / sizeof(arr[0]);
	int cols = sizeof(arr[0]) / sizeof(arr[0][0]);

	cout << "��ά����Ϊ: " << rows << "��" << cols << "��" << endl;

	//2. �鿴��ά������׵�ַ
	cout << "��ά�����׵�ַΪ: " << arr << "\t" << (int)arr << endl;
	cout << "��ά�����һ���׵�ַΪ: " << arr[0] << "\t" << (int)arr[0] << endl;
	cout << "��ά�����һ��Ԫ�ص�ַΪ: " << &arr[0][0] << "\t" << (int)&arr[0][0] << endl;
	cout << "��ά����ڶ����׵�ַΪ: " << arr[1] << "\t" << (int)arr[1] << endl;


	return 0;
}
#endif // TWO_D_ARRAY_NAME
