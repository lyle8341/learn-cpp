#include "starter.h"

#ifdef C_FUNCTION_POINTER


//TODO ��ʽ:		����ֵ���� (*ָ����) (�β��б�)
//���ã� ���ú���ָ�룬���Զ�̬�ĵ��ú���



void method1() {
	printf("method1\n");
}

int method2(int a, int b) {
	printf("method2\n");
	return a + b;
}

int main() {
	//1. ��������ָ��ָ����
	void (*p1)() = method1;
	int (*p2)(int, int) = method2;

	//2. ���ú���ָ����ú���
	p1();
	int num = p2(3, 4);
	printf("%d\n", num);






	return 0;
}
#endif // C_FUNCTION_POINTER