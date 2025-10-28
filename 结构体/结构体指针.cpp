#include "starter.h"


#ifdef STRUCT_POINTER

struct Student {
	string name;
	int age;
	int score;
};

int main() {
	struct Student stu = { "smith", 23, 87 };

	struct Student* p = &stu;

	cout << "姓名:" << p->name << "\t年龄:" << p->age << "\t分数:" << p->score << endl;

	//
	struct Student* pp = new Student{ "Jay",89, 5 };
	cout << "姓名:" << pp->name << " age:" << pp->age << " score:" << pp->score << endl;
	delete pp;
}

#endif // STRUCT_POINTER
