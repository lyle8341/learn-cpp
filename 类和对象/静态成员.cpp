#include "starter.h"


#ifdef STATIC_FIELD_METHOD

//静态成员变量
class Person {
public:

	//1.所有对象都共享同一份数据
	//2.编译阶段就分配内存
	//3.类内声明，类外初始化操作
	static int age;


	//静态成员函数
	//所有对象共享同一个函数
	//静态成员函数只能访问静态成员变量
	static void func() {
		cout << "static void func is called" << endl;

		//静态成员函数只能访问静态成员变量
		age = 120;

	}



	//
private:
	static int pwd;

};


//类内声明，类外初始化
int Person::age = 200;
int Person::pwd = 12345;

void test01() {
	Person p;
	cout << p.age << endl;

	Person p2;
	p2.age = 900;
	cout << p.age << endl;
}

//静态成员变量有两种访问方式:
void test02() {
	//1.通过对象访问
	Person p;
	cout << p.age << endl;
	p.func();

	//2.通过类名访问
	cout << Person::age << endl;

	//inaccessible
	//cout << Person::pwd << endl;


	Person::func();

}



int main() {

	//test01();
	test02();
	return 0;
}

#endif // STATIC_FIELD_METHOD
