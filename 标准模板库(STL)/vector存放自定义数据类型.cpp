#include "starter.h"

#ifdef VECTOR_CUSTOM_TYPE

class Person {
public:
	Person(string name, int age) {
		this->name = name;
		this->age = age;
	}

	//vector �����ĸ�Ԫ��
	//TODO vector����4�Σ��ֲ���������4�Σ�vector��������n��
	~Person() {
		cout << "name = " << this->name << " �Ķ���������" << endl;
	}

	string name;
	int age;
};

void myPrint(const Person& p) {
	cout << "����: " << p.name << "\t����: " << p.age << endl;
}

//����Զ�������
void test01() {
	vector<Person> v;
	Person p1("��ɮ", 30);
	Person p2("����", 30);
	Person p3("���", 30);
	Person p4("��", 30);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	//�����ֱ��� ����STL�ṩ�ı����㷨
	for_each(v.begin(), v.end(), myPrint);


	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << (*it).name << "\t" << (*it).age << endl;
		cout << it->name << "\t" << it->age << endl;
	}
}

//����Զ�������ָ��
void test02() {
	vector<Person*> v;

	Person p1("��ɮ", 30);
	Person p2("����", 30);
	Person p3("���", 30);
	Person p4("��", 30);
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);

	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << (*it)->name << "\t" << (*it)->age << endl;
	}
}

int main() {
	// test01();
	test02();
	return 0;
}
#endif // VECTOR_CUSTOM_TYPE
