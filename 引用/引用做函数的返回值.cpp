#include "starter.h"


#ifdef REFERENCE_AS_RETURN

//�����������ķ���ֵ
//1. ��Ҫ���ؾֲ�����������
int& test01() {
	int a = 10; //�ֲ���������������е�ջ
	return a;
}


//2. �����ĵ��ÿ�����Ϊ��ֵ
int& test02() {
	static int a = 10;//��̬�����������ȫ�������ڳ��������ϵͳ�ͷ�
	return a;
}


int main() {
	//int& ref = test01();//��������

	int& ref = test02();

	//�����ĵ��ÿ�����Ϊ��ֵ
	//�����������ֵ����ô���뷵�����ã����ã�����
	test02() = 2000;

	return 0;
}
#endif // REFERENCE_AS_RETURN
