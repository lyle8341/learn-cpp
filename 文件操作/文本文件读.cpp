#include "starter.h"

#ifdef TEXT_READ


void first_read_way(ifstream& ifs) {
	char buf[1024] = { 0 };
	while (ifs >> buf)
	{
		cout << buf << endl;;
	}
}

void second_read_way(ifstream& ifs) {
	char buff[1024] = { 0 };
	while (ifs.getline(buff, sizeof(buff)))
	{
		cout << buff << endl;
	}
}

void third_read_way(ifstream& ifs) {
	string buff;
	while (getline(ifs, buff))
	{
		cout << buff << endl;
	}
}

void fourth_read_way(ifstream& ifs) {
	char c;
	while ((c = ifs.get()) != EOF)
	{
		cout << c;
	}
}

void test01() {
	//���� fstream
	//1.����������
	ifstream ifs;

	//2.���ļ������ж��Ƿ�򿪳ɹ�
	ifs.open("text.txt", ios::in);//��Ŀ��Ŀ¼��

	if (!ifs.is_open()) {
		cout << "�ļ���ʧ��" << endl;
		return;
	}

	//3.�����ݣ����ַ�ʽ��
	//��ʽһ
	first_read_way(ifs);
	//��ʽ��
	//second_read_way(ifs);
	//��ʽ��
	//third_read_way(ifs);
	//��ʽ��
	//fourth_read_way(ifs);


	//4.�ر��ļ�
	ifs.close();
}


int main() {
	test01();
	return 0;
}

#endif // TEXT_READ
