#include "starter.h"


#ifdef STRUCT_DEFAULT

int main() {


	struct Student
	{
		string name;
		string major_code = "007";
		int	depart = 1;

	};

	struct Student s1 = { "���³�" };
	struct Student s2 = { "lyle", "001", 10 };

	cout << "s1����:" << s1.name << " רҵ:" << s1.major_code << " ��λ:" << s1.depart << endl;;
	cout << "s2����:" << s2.name << " רҵ:" << s2.major_code << " ��λ:" << s2.depart << endl;;
}


#endif // STRUCT_DEFAULT
