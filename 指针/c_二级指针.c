#include "starter.h"

#ifdef C_SECONDARY_POINTER
int main() {
	//����ָ������

	int a = 10;
	int b = 20;

	//����һ��ָ��
	int* p = &a;

	//�������ָ��
	int** pp = &p;

	//TODO 1.���ö���ָ���޸�һ��ָ�������¼���ڴ��ַ
	*pp = &b;

	printf("%p\n", &a);
	printf("%p\n", &b);
	printf("%p\n", p);

	//TODO 2.���ö���ָ���ȡ�������м�¼������
	printf("%d\n", **pp);

	return 0;
}
#endif // C_SECONDARY_POINTER