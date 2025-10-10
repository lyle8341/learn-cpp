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
	t.name = "张居正";
	t.age = 50;
	t.stu.name = "万历";
	t.stu.age = 20;
	t.stu.score = 15;

	Teacher* p = &t;

	cout << "老师名字: " << p->name << "\t老师年龄: " << p->age << "\t学生名字: " << p->stu.name << "\t学生成绩: " << p->stu.score << endl;
	return 0;
}


#endif // STRUCT_NESTED
