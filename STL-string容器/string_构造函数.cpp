#include "starter.h"


#ifdef STRING_CONTAINER_CONSTRUCTOR

//TODO string������һ����

void test01() {
	//TODO Ĭ�Ϲ���
	string s1;
	
	//TODO ʹ���ַ���s��ʼ��
	const char* str = "hello world"; //c���Է���ַ���
	string s2(str);
	
	//TODO ��������
	string s3(s2);

	//TODO ʹ��n���ַ�c��ʼ��
	string s4(4,'n');

	cout << "s2 = " << s2 << endl;
	cout << "s3 = " << s3 << endl;
	cout << "s4 = " << s4 << endl;
}

int main() {
	test01();
	return 0;
}


#endif // STRING_CONTAINER_CONSTRUCTOR
