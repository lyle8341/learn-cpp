#include "starter.h"


#ifdef DANGLING_POINTER

//Ұָ�룺 ָ�����ָ��Ƿ����ڴ�ռ�

int main() {
	//ָ�����pָ���ڴ��ַ���Ϊ0x1100�Ŀռ�
	int* p = (int*)0x1100;

	//����Ұָ�뱨��
	cout << *p << endl;

	return 0;
}


#endif // DANGLING_POINTER
