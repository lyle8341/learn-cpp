#include <iostream>
#include "starter.h"

using namespace std;


#ifdef DATA_INPUT

int main() {
	// ����
	int a = 0;
	cout << "������α���a��ֵ��" << endl;
	cin >> a;
	cout << "���α��� a = " << a << endl;

	//����
	float f = 3.14f;
	cout << "��������ͱ���f��ֵ��" << endl;
	cin >> f;
	cout << "���α��� f = " << f << endl;

	//�ַ���
	char ch = 'x';
	cout << "����ַ��ͱ���ch��ֵ��" << endl;
	cin >> ch;
	cout << "���α��� ch = " << ch << endl;

	//�ַ�����
	string str = "hello";
	cout << "����ַ�������str��ֵ��" << endl;
	cin >> str;
	cout << "���α��� str = " << str << endl;

	//��������
	bool flag = true;
	cout << "�����������flag��ֵ��" << endl;
	cin >> flag;
	cout << "���α��� flag = " << flag << endl;

	return 0;
}
#endif // DATA_INPUT
