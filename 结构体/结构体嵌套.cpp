#include <iostream>
#include "starter.h"

using namespace std;

#ifdef STRUCT_NESTED

struct Student
{
	string name;
	int age;
	int score;
};

struct Teacher
{
	int id;
	string name;
	int age;
	struct Student stu;
};

int main() {
	Teacher t;
	t.id = 1;
	t.name = "�ž���";
	t.age = 50;
	t.stu.name = "����";
	t.stu.age = 20;
	t.stu.score = 15;

	Teacher* p = &t;

	cout << "��ʦ����: " << p->name << "\t��ʦ����: " << p->age << "\tѧ������: " << p->stu.name << "\tѧ���ɼ�: " << p->stu.score << endl;
	return 0;
}


#endif // STRUCT_NESTED
