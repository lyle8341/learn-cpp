#include "starter.h"


#ifdef MEM_FOUR_REGION_GLOBAL

//ȫ�ֱ���
int g_a = 10;
int g_b = 10;

const int c_g_a = 10;
const int c_g_b = 10;

int main() {
	//��ͨ�ֲ�����
	int a = 10;
	int b = 10;
	cout << "�ֲ�����a�ĵ�ַΪ:\t" << (long long)&a << endl;
	cout << "�ֲ�����b�ĵ�ַΪ:\t" << (long long)&b << endl;

	cout << "ȫ�ֱ���g_a�ĵ�ַΪ:\t" << (long long)&g_a << endl;
	cout << "ȫ�ֱ���g_b�ĵ�ַΪ:\t" << (long long)&g_b << endl;

	//��̬����
	static int s_a = 10;
	static int s_b = 10;
	cout << "��̬����g_a�ĵ�ַΪ:\t" << (long long)&s_a << endl;
	cout << "��̬����g_b�ĵ�ַΪ:\t" << (long long)&s_b << endl;

	//����
	//�ַ�������
	cout << "�ַ��������ĵ�ַΪ:\t" << (long long)&"Hello World" << endl;

	//const���εı���
	//const���ε�ȫ�ֱ���
	cout << "const����ȫ�ֱ���c_g_a:\t" << (long long)&c_g_a << endl;
	cout << "const����ȫ�ֱ���c_g_b:\t" << (long long)&c_g_b << endl;

	//const���εľֲ����� �ֲ� �ֲ� ����ͨ�ֲ���һ��
	const int c_l_a = 10;
	const int c_l_b = 10;
	cout << "const���ξֲ�����c_l_a:\t" << (long long)&c_l_a << endl;
	cout << "const���ξֲ�����c_l_b:\t" << (long long)&c_l_b << endl;

	return 0;
}

#endif // MEM_FOUR_REGION_GLOBAL
