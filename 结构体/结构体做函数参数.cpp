#include "starter.h"


#ifdef STRUCT_AS_PARAM

struct Student
{
	string name;
	int age;
	int score;
};

//ֵ����
void printStudent1(Student stu) {
	stu.age = 29;
	cout << "�Ӻ���1�� ����: " << stu.name << "\t����: " << stu.age << "\t����: " << stu.score << endl;
}

//��ַ����
void printStudent2(struct Student* p) {
	p->age = 120;
	cout << "�Ӻ���2�� ����: " << p->name << "\t����: " << p->age << "\t����: " << p->score << endl;
}


int main() {
	Student s;
	s.name = "����";
	s.age = 34;
	s.score = 90;

	//printStudent1(s);
	printStudent2(&s);

	cout << "main������ ����: " << s.name << "\t����: " << s.age << "\t����: " << s.score << endl;

	return 0;
}

#endif // STRUCT_AS_PARAM