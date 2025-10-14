#include "starter.h"

#ifdef PLUS_OP_OVERRIDE


//this指针.cpp


class Person {

public:
	//1.成员函数重载 +
	/*Person operator+(Person& p) {
		Person temp;
		temp.a = this->a + p.a;
		temp.b = this->b + p.b;
		return temp;
	}*/


public:
	int a;
	int b;
};


//2.全局函数重载 +
Person operator+(Person& p1, Person& p2) {
	Person temp;
	temp.a = p1.a + p2.a;
	temp.b = p1.b + p2.b;
	return temp;
}


//运算符重载
Person operator+(Person& p1, int num) {
	Person temp;
	temp.a = p1.a + num;
	temp.b = p1.b + num;
	return temp;
}


void test01() {
	Person p1;
	p1.a = 10;
	p1.b = 100;

	Person p2;
	p2.a = 20;
	p2.b = 200;

	Person p3 = p1 + p2;

	// 成员函数重载本质调用
	//Person p3 = p1.operator+(p2);

	// 全局函数重载本质调用
	//Person p3 = operator+(p1, p2);

	cout << "p3: a = " << p3.a << " b = " << p3.b << endl;


	Person p4 = p1 + 10;
	cout << "p4: a = " << p4.a << " b = " << p4.b << endl;


}


int main() {

	test01();

	return 0;
}

#endif // PLUS_OP_OVERRIDE
