#include "starter.h"


#ifdef C_FUNCTION_POINTER_USE

int add(int a, int b) {
	return a + b;
}

int subtract(int a, int b) {
	return a - b;
}

int multiply(int a, int b) {
	return a * b;
}

int divide(int a, int b) {
	return a / b;
}

int main() {

	//1.����һ������װ�ĸ�������ָ�룬����ָ������
	//TODO �����б�ֱ�Ӿ����˱��������ѹջ���򴫼Ĵ����������������ƥ����ܵ��£�ջ��λ������ֵ���ҡ�ĳЩƽ̨��ֱ�ӱ���
	int (*p[4])(int, int) = { add, subtract, multiply, divide };

	//
	printf("��¼���������ֲ������\n");
	int a;
	int b;
	scanf_s("%d %d", &a, &b);//"%d %d"���޿ո�û��Ӱ��
	printf("a = %d\n", a);
	printf("b = %d\n", b);

	printf("��: %d\n", p[0](a, b));
	printf("��: %d\n", p[1](a, b));
	printf("��: %d\n", p[2](a, b));
	printf("��: %d\n", p[3](a, b));
	printf("mix: %d\n", p[4](a, b, 4));

	return 0;
}

#endif // C_FUNCTION_POINTER_USE