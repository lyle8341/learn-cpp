#include <iostream>
#include "starter.h"

using namespace std;

#ifdef STRUCT_ARRAY

struct Student {
	string name;
	int age;
	int score;
};

int main() {
	//�ṹ������
	struct Student arr[3] = {
		{"����", 17, 68},
		{"����",25, 89},
		{"����", 45, 40}
	};

	//���ṹ��������Ԫ�ظ�ֵ
	arr[2].name = "������";

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		Student temp = arr[i];
		cout << "����: " << temp.name << "\t����: " << temp.age << "\t����: " << temp.score << endl;
	}


	return 0;
}

#endif // STRUCT_ARRAY
