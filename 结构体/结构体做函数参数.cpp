#include "starter.h"


#ifdef STRUCT_AS_PARAM

struct Student
{
	string name;
	int age;
	int score;
};

//值传递
void printStudent1(Student stu) {
	stu.age = 29;
	cout << "子函数1中 姓名: " << stu.name << "\t年龄: " << stu.age << "\t分数: " << stu.score << endl;
}

//地址传递
void printStudent2(struct Student* p) {
	p->age = 120;
	cout << "子函数2中 姓名: " << p->name << "\t年龄: " << p->age << "\t分数: " << p->score << endl;
}


int main() {
	Student s;
	s.name = "张三";
	s.age = 34;
	s.score = 90;

	//printStudent1(s);
	printStudent2(&s);

	cout << "main函数中 姓名: " << s.name << "\t年龄: " << s.age << "\t分数: " << s.score << endl;

	return 0;
}

#endif // STRUCT_AS_PARAM