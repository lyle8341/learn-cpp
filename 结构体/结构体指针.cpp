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

	cout << "����:" << p->name << "\t����:" << p->age << "\t����:" << p->score << endl;

}

#endif // STRUCT_POINTER
