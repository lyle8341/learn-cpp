//#define _CRT_SECURE_NO_WARNINGS  //���ڵ�һ��
#include "starter.h"

#ifdef C_KEYBOARD_INPUT

//TODO scanf�в�����\n
int main() {
	// scanner format
	int a;
	printf("������һ������");
	//scanf("%d", &a);
	scanf_s("%d", &a);

	printf("a = %d\n", a);

	//�ַ���¼��
	char str[100];
	printf("������������\n");
	scanf_s("%s", str, (unsigned)sizeof(str));
	printf("����:%s\n", str);

	int x, y;
	scanf_s("%d %d", &x, &y);
	printf("x + y = %d\n", x + y);

	return 0;
}
#endif // C_KEYBOARD_INPUT
