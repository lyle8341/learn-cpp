#include "starter.h"


#ifdef STRUCT_PTR_ARRAY

struct Student
{
	string name;
	string major_code = "007";
	int	depart = 1;

};


int main() {

	//引入已存在结构体数组地址
	struct Student arr[] = { {"Jay"},{"lily", "001", 3},{"Kite","023",6} };
	struct Student* p = arr;


	//new
	struct Student* pp = new Student[3]{ {"Jay"},{"lily", "001", 3},{"Kite","023",6} };

	delete[] pp;


	return 0;
}


#endif // #define STRUCT_PTR_ARRAY