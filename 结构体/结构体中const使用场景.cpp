#include <iostream>
#include "starter.h"

using namespace std;

#ifdef STRUCT_CONST

struct Student {
	string name;
	int age;
	int score;
};

//�������е��βθ�Ϊָ�룬���Լ����ڴ�ռ䣬���Ҳ��Ḵ���µĸ�������
void printStudent(const Student* stu) {
	//stu->age = 999;//const��ֹ�����
	cout << "����: " << stu->name << "\t����: " << stu->age << "\t����: " << stu->score << endl;
}

int main() {
	struct Student s = { "����", 23, 87 };



	return 0;
}
#endif // STRUCT_CONST
