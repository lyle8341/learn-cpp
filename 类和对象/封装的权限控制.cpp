#include "starter.h"


#ifdef CLASS_ACCESS_PRIVILEGE

//public		成员-类内可访问，类外可以访问
//protected		成员-类内可访问，类外不可以访问 子类可以访问父类中受保护的成员
//private		成员-类内可访问，类外不可以访问 子类不可以访问父类私有成员

class Person {
public:
	string name;
protected:
	string car;
private:
	int password;

public:
	void func() {
		name = "张三";
		car = "奔驰";
		password = 123456;
	}

};


int main() {
	Person p1;
	p1.name = "赵四";
	//p1.car = "byd"; // inaccessible


	return 0;
}

#endif // CLASS_ACCESS_PRIVILEGE
