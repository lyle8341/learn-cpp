#include "starter.h"


#ifdef STRING_TYPE

class Person {
public:
	char name[64];
	int age;
};


void test01() {
	//TODO c����ַ��� char ������[] = "�ַ���ֵ";
	char name[] = "lyle";
	cout << name << endl;
	cout << sizeof(name) << endl;// 4���ַ�+1������ֹ��


	//TODO c++ ����ַ��� string ������ = "�ַ���ֵ";
	string motto = "just do it";
	cout << motto << endl;
	cout << sizeof(motto) << endl; //string�������Ĵ�С
	cout << motto.size() << endl;
	cout << motto.length() << endl;
}

void test02() {
	Person p;
	p.age = 10;


	//�ڱ���׶Σ����������"god"������('g','o','d','\0')���Ƶ������ǰ4���ֽ�
	char name[64] = "god";//�Ϸ��ĳ�ʼ�����
	cout << "name:       " << (void*)name << endl;      // ������Ԫ�ص�ַ
	cout << "&name[0]:   " << (void*)&name[0] << endl;  // ��һ���ַ���ַ
	cout << "&name:      " << (void*)&name << endl;     // ��������ĵ�ַ

	// ��c/c++�����У����鲻�ǿɸ�ֵ����(non-assignable type)
	//p.name = "god";//�Ƿ���ֵ���

	cout << p.name << " " << p.age << endl;
}

int main() {
	//test01();
	test02();
	return 0;
}
#endif // STRING_TYPE
