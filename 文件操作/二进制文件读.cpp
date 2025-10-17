#include "starter.h"


#ifdef BINARY_READ

//TODO ����ԭ�ͣ� istream& read(char* buffer, int len);

class Person {
public:
	char name[64];
	int age;

};

void test() {

	//1.����������
	ifstream ifs("person.bin", ios::in | ios::binary);

	//ifs.open("person.bin", ios::out | ios::binary);

	if (!ifs.is_open()) {
		cout << "���ļ�ʧ��" << endl;
		return;
	}

	//���ļ�
	Person p;
	ifs.read((char*)&p, sizeof(Person));

	cout << "����: " << p.name << " ����: " << p.age << endl;

	//�ر��ļ�
	ifs.close();
}

int main() {
	test();

	return 0;
}




#endif // BINARY_READ
