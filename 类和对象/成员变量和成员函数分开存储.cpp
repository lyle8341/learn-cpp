#include "starter.h"


#ifdef FIELD_METHOD_DIFF_STORAGE

class Person
{


};

class Student {
	int age;				//�Ǿ�̬��Ա������������Ķ���

	static int score;		//  ��̬��Ա�����������������

	void func() {}			//�Ǿ�̬��Ա�����������������

	static void func2() {}	//  ��̬��Ա�����������������
};

int Student::score = 20;

void test01() {
	Person p;
	//�ն���ռ���ڴ�ռ�Ϊ: 1�ֽڡ�Ϊ�����ֲ�ͬ�ն���ռ���ڴ��λ��
	//ÿ���ն���ҲӦ����һ����һ�޶����ڴ��ַ
	cout << "size of p = " << sizeof(p) << endl;

}

void test02() {
	Student s;
	//
	cout << "size of s = " << sizeof(s) << endl;

}


int main() {
	//test01();
	test02();


	return 0;
}
#endif // FIELD_METHOD_DIFF_STORAGE
