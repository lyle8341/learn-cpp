#include "starter.h"

#ifdef C_STRUCT_NESTED

struct Message
{
	char phone[12];
	char mail[100];
};


struct Student
{
	char name[100];
	int age;
	char gender;
	double height;
	struct Message msg;//£°£°struct±ÿ–Î–¥
};

int main() {
	struct Student stu;

	strcpy(stu.name, "lyle");
	stu.age = 30;
	stu.gender = 'M';
	stu.height = 1.73;

	strcpy(stu.msg.phone, "18700000000");
	strcpy(stu.msg.mail, "lyllyl0000@126.com");

	printf("%s %d %c %.2lf %s %s\n", stu.name, stu.age, stu.gender, stu.height, stu.msg.phone, stu.msg.mail);


	struct Student s2 = {
		"lisi",
		30,
		'F',
		1.80,
		{
			"12011012000",
			"lisi@gmail.com"
		}
	};
	printf("%s %d %c %.2lf %s %s\n", s2.name, s2.age, s2.gender, s2.height, s2.msg.phone, s2.msg.mail);









	return 0;
}
#endif // C_STRUCT_NESTED