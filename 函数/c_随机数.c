#include "starter.h"
#include <stdlib.h>

#ifdef C_RANDOM

// C�����е�������� "α�����"������ "�߳�ͬ�෽��"��ʽ����ó���

int main() {
	//TODO C���������������ԭ�����£�
	int num0 = 44;//���ӣ���ʼֵ�����׶ˣ����Ӳ��䣬���������ǹ̶���
	int num1 = (31 * num0 + 13) % 100; //���������


	srand(1);//�������ӣ���ʼֵ��
	for (int i = 0; i < 10; i++)
	{
		int r = rand(); //��ȡ�����
		printf("%d\n", r);
	}

	//�Ľ���
	srand(time(NULL));//�������ӣ���ʼֵ��
	for (int i = 0; i < 10; i++)
	{
		int r = rand(); //��ȡ�����
		printf("%d\n", r);
	}
	//���÷�Χ 0~32767
	//TODO ���ⷶΧ����������� 8~49
	for (int i = 0; i < 10; i++)
	{
		//1.�ѷ�Χ��ɰ�ͷ����β 8-50
		//2.β�� - ��ͷ = 50 - 8 = 42
		//3.�޸Ĵ���
		int r = rand() % 42 + 8; //(0~99)+1
		printf("good %d\n", r);
	}

	return 0;
}
#endif // C_RANDOM