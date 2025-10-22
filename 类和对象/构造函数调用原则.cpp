#include "starter.h"


#ifdef CONSTRUCT_CALL_PRINCIPLE

//见默认构造函数.png

//如果用户定义了有参构造，c++不再提供默认无参构造，但是会提供拷贝构造
//如果用户定义了拷贝构造，c++不再提供其他构造函数




class Person {

public:
	string name;
	//int age; //int属性，编译器会优化，看不到想看的结果
};

void test01() {
	Person p;
	p.name = "lyle";
	Person p2(p);
	cout << "p2姓名: " << p2.name << endl;
}

int main() {
	test01();
	return 0;
}

#endif // CONSTRUCT_CALL_PRINCIPLE