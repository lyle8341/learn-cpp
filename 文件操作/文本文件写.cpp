#include "starter.h"

#ifdef TEXT_WRITE


void test01() {
	//���� fstream
	//1.����������
	ofstream ofs;

	//2.ָ���򿪷�ʽ
	ofs.open("text.txt", ios::out);//��Ŀ��Ŀ¼��

	//3.д����
	ofs << "����: ����" << endl;
	ofs << "���䣺20" << endl;
	ofs << "�Ա�: ��" << endl;

	//4.�ر��ļ�
	ofs.close();
}


int main() {
	test01();
	return 0;
}
#endif // TEXT_WRITE
