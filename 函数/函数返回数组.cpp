#include "starter.h"

#ifdef FUNCTION_RETURN_ARR

//TODO ��������������ǵ�һ��Ԫ�صĵ�ַ�����Է������鱾���Ͼ��Ƿ���ָ��
int* func1() {
	static int arr[] = { 1,2,3 };
	return arr;
}

int* func2() {
	int* arr = new int[3]{ 1,2,3 };
	return arr;
}

int arr[] = { 1,2,3 };//ȫ�֣����Ƽ�

int* func3() {
	//....
	return arr;
}

//�Ƽ�
void plus_one_in_arr(int* arr, const int length) {
	for (int i = 0; i < length; i++)
	{
		arr[i] = i + 1;
	}
}


//TODO ���Ƽ������������飬��ΪҪô�ֶ�delete��Ҫôstaticһֱռ�ڴ棬Ҫôȫ�ֱ���
//TODO �Ƽ����ں����ⴴ�����飬���뺯������ַ�����ô��ݣ������в�������


int main() {

	int arr[3];//�����ⴴ��
	plus_one_in_arr(arr, 3);

	for (int i = 0; i < 3; i++)
	{
		cout << arr[i] << endl;
	}
	return 0;
}
#endif // FUNCTION_RETURN_ARR