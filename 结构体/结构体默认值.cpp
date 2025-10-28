#include "starter.h"


#ifdef STRUCT_DEFAULT

int main() {


	struct Student
	{
		string name;
		string major_code = "007";
		int	depart = 1;

	};

	struct Student s1 = { "董事长" };
	struct Student s2 = { "lyle", "001", 10 };

	cout << "s1姓名:" << s1.name << " 专业:" << s1.major_code << " 单位:" << s1.depart << endl;;
	cout << "s2姓名:" << s2.name << " 专业:" << s2.major_code << " 单位:" << s2.depart << endl;;
}


#endif // STRUCT_DEFAULT
