#include <iostream>
#include "starter.h"

using namespace std;

#ifdef FUNCTION_DEFAULT_PARAM

//�﷨: ����ֵ���� ������ (����=Ĭ��ֵ)

//��������Լ��������ݣ������Լ������ݣ����û�д��ݣ���ʹ��Ĭ��ֵ
int func(int a, int b = 10, int c = 20) {
	return a + b + c;
}

// 1.Ĭ�ϲ��������ڲ����б�Ľ�β
//int func2(int a, int b = 10, int c) {
//	return a + b + c;
//}


// 2.�������������Ĭ�ϲ���������ʵ�־Ͳ�����Ĭ�ϲ���
// ������ʵ��ֻ����һ����Ĭ�ϲ���

int main() {
	cout << func(10) << endl;
	cout << func(10, 40) << endl;
	cout << func(10, 40, 50) << endl;
	return 0;
}
#endif // FUNCTION_DEFAULT_PARAM
