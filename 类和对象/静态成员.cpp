#include "starter.h"


#ifdef STATIC_FIELD_METHOD

//��̬��Ա����
class Person {
public:

	//1.���ж��󶼹���ͬһ������
	//2.����׶ξͷ����ڴ�
	//3.���������������ʼ������
	static int age;


	//��̬��Ա����
	//���ж�����ͬһ������
	//��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
	static void func() {
		cout << "static void func is called" << endl;

		//��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
		age = 120;

	}



	//
private:
	static int pwd;

};


//���������������ʼ��
int Person::age = 200;
int Person::pwd = 12345;

void test01() {
	Person p;
	cout << p.age << endl;

	Person p2;
	p2.age = 900;
	cout << p.age << endl;
}

//��̬��Ա���������ַ��ʷ�ʽ:
void test02() {
	//1.ͨ���������
	Person p;
	cout << p.age << endl;
	p.func();

	//2.ͨ����������
	cout << Person::age << endl;

	//inaccessible
	//cout << Person::pwd << endl;


	Person::func();

}



int main() {

	//test01();
	test02();
	return 0;
}

#endif // STATIC_FIELD_METHOD
