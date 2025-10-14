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

}

#endif // STRUCT_POINTER
