#include "starter.h"


#ifdef HOW_TO_USE_NEW

int* func() {
	return new int(20);//����һ������
}

void test01() {
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	//�ͷŶ���������
	delete p;
}

void test02() {
	//����10�����ε������ڶ���
	int* arr = new int[10];
	int* init = arr;//��ֵ��
	int* read = arr;//������
	for (int i = 0; i < 10; i++)
	{
		*init++ = i + 100; // arrָ���Ѿ��ƶ��ˣ����治����������������
	}
	for (int i = 0; i < 10; i++)
	{
		cout << *read++ << endl;
	}
	//�ͷ�����
	//���ָ���ƶ��ˣ��˴����ᱨ��
	delete[] arr;
}

int main() {
	//test01();
	test02();
	return 0;
}

#endif // HOW_TO_USE_NEW