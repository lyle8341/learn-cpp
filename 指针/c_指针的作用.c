#include "starter.h"


#ifdef C_ROLE_OF_POINTER

//TODO 1.�������������еı���
void mySwap(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

//����㷨
int* method() {
	int a = 30;
	return &a;
}

int* method2() {
	static int a = 30; //��ʱ����һֱ���浽�������
	return &a;
}

//TODO 2.�������ض��ֵ
void getMaxAndMin(int arr[], int len, int* pmax, int* pmin) {
	//�����ֵ
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

//TODO 3.�����Ľ���ͼ���״̬�ֿ�
//����ֵ����ʾ�����״̬ 0:���� 1:������
int getRemainder(int a, int b, int* res) {
	if (b == 0) {
		//
		return 1;
	}
	*res = a % b;
	return 0;
}


//TODO ָ�������
int main() {
	int a = 10;
	int b = 20;
	printf("����ǰ: %d, %d\n", a, b);
	mySwap(&a, &b);
	printf("���ú�: %d, %d\n", a, b);


	//int* p = method();
	int* p = method2();
	printf("ģ�������߼����ϵ�ʱ��\n");
	printf("ģ�������߼����ϵ�ʱ��\n");
	printf("ģ�������߼����ϵ�ʱ��\n");
	printf("%d\n", *p);

	//���ض��ֵ
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int len = sizeof(arr) / sizeof(int);
	int max = arr[0];
	int min = arr[0];

	getMaxAndMin(arr, len, &max, &min);
	printf("���ֵ: %d\n", max);
	printf("��Сֵ: %d\n", min);


	int m = 10;
	int n = 0;
	int res = 0;
	int flag = getRemainder(m, n, &res);
	//״̬�ж�
	if (!flag) {
		printf("����: %d\n", res);
	}

	return 0;
}

#endif // C_ROLE_OF_POINTER
