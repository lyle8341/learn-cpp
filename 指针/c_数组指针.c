#include "starter.h"

//TODO ����ָ��ϸ��

#ifdef C_ARR_POINTER


//TODO 1.arr��������ʱ�򣬻��˻�Ϊ��һ��Ԫ�ص�ָ��

//TODO ���������
	//1. sizeof �����ʱ�򣬲����˻���arr��������
	//2. &arr ��ȡ��ַ��ʱ�򣬲����˻�

int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

	//sizeof �����ʱ�򣬲����˻���arr��������
	printf("%zu\n", sizeof(arr));

	//TODO &arr�����˻�����¼�����׵�ַ��			��������������*���鳤�� 40
	//TODO arr���������˻�Ϊ��һ��Ԫ�ص�ָ�롣	��������������

	printf("%p\n", arr);
	printf("%p\n", &arr);

	printf("%p\n", arr + 1);
	printf("%p\n", &arr + 1);//�����������飬Ӧ�ó����� ����/c_��ά����.c

	return 0;
}
#endif // C_ARR_POINTER