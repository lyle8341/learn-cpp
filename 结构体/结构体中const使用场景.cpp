#include "starter.h"


#ifdef STRUCT_CONST

struct Student {
	string name;
	int age;
	int score;
};

//将函数中的形参改为指针，可以减少内存空间，而且不会复制新的副本出来
void printStudent(const Student* stu) {
	//stu->age = 999;//const防止误操作
	cout << "姓名: " << stu->name << "\t年龄: " << stu->age << "\t分数: " << stu->score << endl;
}

int main() {
	struct Student s = { "李四", 23, 87 };



	return 0;
}
#endif // STRUCT_CONST
