//#define _CRT_SECURE_NO_WARNINGS  //���ڵ�һ��
#include "starter.h"

#ifdef C_KEYBOARD_INPUT

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
	//scanf_s("%s", &str, (unsigned)sizeof(str));
	scanf_s("%s", str, (unsigned)sizeof(str));
	printf("����:%s", str);


	return 0;
}
#endif // C_KEYBOARD_INPUT
