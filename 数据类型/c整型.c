#include "starter.h"

#ifdef C_INTEGER


int main() {
	//��ʽת��,short char ���͵������ڲ������ʱ��������Ϊint���ټ���
	short a = 10;
	short b = 20;
	printf("a+b���ռ���ֽ�: %zu\n", sizeof(a + b));

	short result = (short)(a + b); //


	return 0;
}

#endif // C_INTEGER
