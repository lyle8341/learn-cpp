#include <iostream>
#include "starter.h"

using namespace std;


#ifdef NULL_POINTER

//��ָ�룺 ָ�����ָ���ڴ��б��Ϊ0�Ŀռ�
//��;��	  ��ʼ��ָ�����
//��ָ��ָ����ڴ��ǲ����Է��ʵ�

int main() {

	//ָ�����pָ����ڴ��ַ���Ϊ0�Ŀռ�
	int* p = NULL;
	cout << p << endl;

	//���ʿ�ָ�뱨��
	//�ڴ���0~255Ϊϵͳռ���ڴ棬�������û�����
	cout << *p << endl;


	return 0;
}


#endif // NULL_POINTER_DULING
