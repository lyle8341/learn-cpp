#include "starter.h"

#ifdef C_VOID_POINTER

/// <summary>
/// ��������
/// </summary>
/// <param name="a"></param>
/// <param name="b"></param>
/// <param name="len">ָ�����Ͷ�Ӧ���ֽ���</param>
void myswap(void* a, void* b, int len) {
	//��void����ָ��ת��char����ָ��
	char* pca = a;
	char* pcb = b;

	char temp = 0;
	//���ֽ�Ϊ��λ��һ���ֽ�һ���ֽڵĽ��н���
	for (int i = 0; i < len; i++)
	{
		temp = *pca;
		*pca = *pcb;
		*pcb = temp;
		pca++;
		pcb++;
	}
}

int main() {

	int a = 10;
	short s = 20;

	int* pa = &a;
	short* ps = &s;

	//void ����ָ��
	void* p1 = pa;
	void* p2 = ps;

	//��ͬ���͵�ָ��֮�䣬�ǲ��ܻ��ำֵ��
	//void û���κ����ͣ��ô����Խ�����������ָ���¼���ڴ��ַ
	//ȱ��: void����ָ�룬�޷���ȡ������������ݣ�Ҳ���ܽ��мӼ��ļ���
	//printf("%d\n", *p1);


	int x = 89;
	int y = 78;
	printf("����ǰ:x = %d, y = %d\n", x, y);
	myswap(&x, &y, sizeof(int));
	printf("������:x = %d, y = %d\n", x, y);

	long long m = 189L;
	long long n = 278L;
	printf("����ǰ:m = %lld, n = %lld\n", m, n);
	myswap(&m, &n, sizeof(long long));
	printf("������:m = %lld, n = %lld\n", m, n);

	return 0;
}
#endif // C_VOID_POINTER