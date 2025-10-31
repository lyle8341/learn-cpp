#include "starter.h"

#ifdef C_COMMON_FUNCTION

//Ч�ʸ���
void test_malloc() {
	//1.malloc����һƬ�����Ŀռ�
	int* p = malloc(10 * sizeof(int));
	printf("%p\n", p);
	//2.��ֵ
	if (p != NULL) {
		for (int i = 0; i < 10; i++)
		{
			//��һ�ָ�ֵ
			*(p + i) = (i + 1) * 10;
			//�ڶ��ָ�ֵ(��������ʽ������� *(p+i) �� *(i+p))
			//p[i] = (i + 1) * 10;
			//i[p] = (i + 1) * 10;
		}
		//3.����
		for (int i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i));
		}
		printf("\n");
	}
	//4.���� 20��int���͵�����
	int* tmp = realloc(p, 20 * sizeof(int));
	if (tmp == NULL) {//����ʧ��
		printf("realloc failed!\n");
		free(p);
		return;
	}
	//realloc �ɹ�������ָ��
	p = tmp;

	for (int i = 0; i < 20; i++)
	{
		printf("%d ", *(p + i));
	}
	printf("\n");
	free(p);
}

//����ռ� + ���ݳ�ʼ��
void test_calloc() {
	int* p = calloc(10, sizeof(int));
	if (p != NULL) {
		for (int i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i));
		}
		printf("\n");
	}
}

//malloc����Ŀռ���࣬����������ڴ�
void generate_virtual_mem() {
	int size = 1024 * 1024 * 1024;
	int times = 0;
	while (1)
	{
		int* p = malloc(size);
		times++;
		if (p == NULL) {
			printf("����ʧ��\n");
			break;
		}
		printf("�ڴ��%d������ɹ�: %p\n", times, p);
	}
}

int main() {
	// malloc	memory allocation		����ռ䣨������
	// calloc	contiguous allocation	����ռ�+���ݳ�ʼ��
	// realloc	re-allocation			���ݣ�����ɹ��ҷ������µĵ�ַ����ôԭ�����ǿ��ڴ�ᱻ�Զ��ͷ�
										//����޷������µĿռ䣬ԭ����ָ�벻��
										//"��Զ��Ҫ�Ծ�ָ�����ָ��ͬʱfree"
	// free		free					�ͷſռ�
	//test_malloc();
	//test_calloc();
	//generate_virtual_mem();

	return 0;
}
#endif // C_COMMON_FUNCTION