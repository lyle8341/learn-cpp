#include "starter.h"


#ifdef DEFINE_STRUCT

// c++中struct与class唯一的区别就在于 "默认的访问权限不同", struct默认权限为公共


/*
定义结构体语法
struct 结构体名
{
	结构体成员
};

通过结构体创建变量：
① struct 结构体名 变量名
② struct 结构体名 变量名 = {成员1值, 成员2值...}
③ 定义结构体时顺便创建变量
*/

//结构体定义
struct Student {
	string name;
	int age;
	float score;
} s3;

int main() {
	//方式一
	struct Student s1;
	s1.name = "lyle";
	s1.age = 18;
	s1.score = 99.3f;
	cout << "姓名:" << s1.name << " 年龄: " << s1.age << " 分数: " << s1.score << endl;

	//方式二
	struct Student s2 = { "trump", 23, 87.5f };
	cout << "姓名:" << s2.name << " 年龄: " << s2.age << " 分数: " << s2.score << endl;

	//方式三（定义结构体时顺便创建结构体变量）
	s3.name = "john";
	s3.age = 45;
	s3.score = 56.9f;
	cout << "姓名:" << s3.name << " 年龄: " << s3.age << " 分数: " << s3.score << endl;

	//创建结构体变量时，可以省略struct关键字
	Student s4;

	return 0;
}

#endif // DEFINE_STRUCT
