#include "starter.h"


#ifdef CONST_REFERENCE

// �ں����β��б��У����Լ�const�����βΣ���ֹ�βθı�ʵ��

void showValue(const int& v) {
	//v += 10;
	cout << v << endl;
}

int main() {

	//int& ref = 10;  //10��һ�����������ñ�����һ��Ϸ����ڴ�ռ䣬����������

	//����const�Ϳ�����
	//�������Ż����� int temp = 10; const int& ref = temp;
	const int& ref = 10;


	int x = 90;
	//�еı������ᱨ��
	int& const r = x; // ��Ϊ���ñ��������°󶨣������������ "���ó���"

	cout << "over" << endl;
}


#endif // CONST_REFERENCE
