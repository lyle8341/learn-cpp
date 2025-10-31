#include "starter.h"

#ifdef C_ARR_POINTER


//һά����ָ��
void one_dimensional_arr() {
	int arr[] = { 10,20,30,40,50 };
	int len = sizeof(arr) / sizeof(int);

	//TODO ��ȡ����ָ��
	//TODO �������� * ָ���� = arr;   //��������ָ����������Ԫ�ص�����
	int* p = arr;
	//int* p2 = &arr[0];

	for (int i = 0; i < len; i++)
	{
		printf("%d ", *p++);
	}
	printf("\n");
}

//����ָ��ϸ��
void arr_ptr_detail() {
	//TODO 1.arr��������ʱ�򣬻��˻�Ϊ��һ��Ԫ�ص�ָ��

	//TODO ���������
		//1. sizeof �����ʱ�򣬲����˻���arr��������
		//2. &arr ��ȡ��ַ��ʱ�򣬲����˻�

	int arr[] = { 1,2,3,4,5 };

	int* p1 = arr;//�������
	int* p2 = arr + 1;//�������



	//TODO arr���������˻�Ϊ��һ��Ԫ�ص�ָ�롣	�������������͵��ֽ���
	//TODO arr ��"Ԫ��ָ��"
	printf("arr��ʽƫ���ֽ�: %d\n", (int)(arr + 1) - (int)arr);

	//TODO &arr�����˻�����¼�����׵�ַ��			�������������͵��ֽ���*���鳤�� 40
	//TODO &arr ��"����ָ��"
	printf("&arr��ʽƫ���ֽ�: %d\n", (int)(&arr + 1) - (int)&arr);//������������

	//TODO &arr �������� int(*)[5]  |||==> int[5] * p --> int * p[5] --> int(*p)[5]
	int* pb = &arr; // ��ʵ�����Ǵ�������͸�ֵ����ȷд��Ӧ��������
	int(*pp)[5] = &arr;

	printf("%p\n", &arr + 1);  // ����ĩβ
	printf("%p\n", pp + 1);    // ����ĩβ
}

//TODO &arr��;-��ά�����У�ƫ��һ����Ԫ�أ�һ��һά���飩
//���巽ʽһ
void define_dimen_arr_1() {
	int arr[3][5] = { //3: ��ά����ĳ���		5: һά����ĳ���
		{1, 2, 3, 4, 5},
		{6, 7, 8, 9, 0},
		{11,22,33,44,55}
	};
	//���巽ʽһ >>>>>>>>>> ��������
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	//���巽ʽһ >>>>>>>>>> ָ�����
	//TODO ��ȡ����ָ��
	//TODO �������� * ָ���� = arr;   //��������ָ����������Ԫ�ص�����

	//TODO ���ι�������
	//int[5] * p = arr; //[]һ��д�����
	//int* p[5] = arr; //����Ϊ������
	int(*p)[5] = arr;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			//p�Ƕ�ά�����ָ��
			//*p��һά�����ָ��
			printf("%d ", *(*p + j));
		}
		printf("\n");
		//*p++; //TODO ����*(p++);
		p++;//��ά����ָ�룬+1����ʾָ��ڶ���Ԫ�أ��ڶ���һά���飩
	}
}

//���巽ʽ��
void define_dimen_arr_2() {
	int arr1[5] = { 1,2,3,4,5 };
	int arr2[5] = { 11,12,13,14,15 };
	int arr3[5] = { 111,112,113,114,115 };
	int* arr[3] = { arr1, arr2, arr3 };//ָ������
	//���巽ʽ�� >>>>>>>>>> ��������
	int len1 = sizeof(arr1) / sizeof(int);
	int len2 = sizeof(arr2) / sizeof(int);
	int len3 = sizeof(arr3) / sizeof(int);

	//�洢�������鳤��
	int len[3] = { len1, len2, len3 };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < len[i]; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	//���巽ʽ�� >>>>>>>>>> ָ�����
	//TODO ��ȡ����ָ��
	//TODO �������� * ָ���� = arr;   //��������ָ����������Ԫ�ص�����
		//�������� * ָ���� = arr;
	int** p = arr;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < len[i]; j++)
		{
			printf("%d ", *(*p + j));
		}
		printf("\n");
		p++;
	}
}

void summary() {
	//����ָ�룺 ָ�������ָ��
	// eg: int* p = arr;		"Ԫ��ָ��"	������int(4�ֽ�)
	// eg: int(*p)[5] = &arr;	"����ָ��"	������int(4�ֽ�) * 5 = 20�ֽ�

	//ָ�����飺���ָ�������
	// eg: int* p[5]


}
int main() {
	//one_dimensional_arr();
	//arr_ptr_detail();
	define_dimen_arr_1();
	define_dimen_arr_2();
	return 0;
}
#endif // C_ARR_POINTER