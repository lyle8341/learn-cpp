#include <iostream>
#include "starter.h"

using namespace std;


#ifdef CONST_DECORATE_POINTER

int main() {
	int a = 10;
	int b = 10;

	//���䷽����const����int--->ֵ�ǳ��������ܸ�ֵ
	//1.����ָ�룺 ָ��ָ������޸ģ�����ָ��ָ���ֵ�������޸�
	const int* p = &a;
	p = &b; //ָ��ָ������޸�
	//*p = 43; //����ָ��ָ���ֵ�������޸�


	int x = 20;
	int y = 20;
	//���䷽����const����ָ���ַ--->ָ���ַ�ǳ�����ָ���ܸ�
	//2.ָ�볣���� ָ��ָ�򲻿����޸ģ�ָ��ָ���ֵ�����޸�
	int* const px = &x;
	*px = 89; //ָ��ָ���ֵ�����޸�
	//px = &y; //����ָ��ָ�򲻿����޸�


	//3.const����ָ��ͳ���
	int m = 30;
	int n = 30;
	const int* const pm = &m;

	//*pm = 2000; //����ָ��ָ���ֵ�������޸�
	//pm = &n; //����ָ��ָ�򲻿����޸�

	return 0;
}

#endif // CONST_DECORATE_POINTER
