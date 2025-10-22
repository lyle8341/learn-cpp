#include "starter.h"


#ifdef STRUCT_ARRAY

struct Student {
	string name;
	int age;
	int score;
};

int main() {
	//结构体数组
	struct Student arr[3] = {
		{"张三", 17, 68},
		{"李四",25, 89},
		{"王五", 45, 40}
	};

	//给结构体数组中元素赋值
	arr[2].name = "王麻子";

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		Student temp = arr[i];
		cout << "姓名: " << temp.name << "\t年龄: " << temp.age << "\t分数: " << temp.score << endl;
	}


	return 0;
}

#endif // STRUCT_ARRAY
