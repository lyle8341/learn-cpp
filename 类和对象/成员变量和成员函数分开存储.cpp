#include "starter.h"


#ifdef FIELD_METHOD_DIFF_STORAGE

class Person
{


};

class Student {
	int age;				//非静态成员变量，属于类的对象

	static int score;		//  静态成员变量，不属于类对象

	void func() {}			//非静态成员函数，不属于类对象

	static void func2() {}	//  静态成员函数，不属于类对象
};

int Student::score = 20;

void test01() {
	Person p;
	//空对象占用内存空间为: 1字节。为了区分不同空对象占用内存的位置
	//每个空对象也应该有一个独一无二的内存地址
	cout << "size of p = " << sizeof(p) << endl;

}

void test02() {
	Student s;
	//
	cout << "size of s = " << sizeof(s) << endl;

}


int main() {
	//test01();
	test02();


	return 0;
}
#endif // FIELD_METHOD_DIFF_STORAGE
