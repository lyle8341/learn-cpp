#include "starter.h"

#ifdef LEFT_SHITT_OVERRIDE

class Person {

	//允许私有变量访问
	friend ostream& operator<<(ostream& out, Person& p);

public:


	//不会利用成员函数重载左移运算符<<， 因为无法实现调用者在右侧，如：cout << p
	/*void operator<<(cout) {

	}*/



	int a;
	int b;
};


//只能利用全局函数重载左移运算符
//void operator<<(ostream& cout, Person& p) {
//	cout << "a = " << p.a << " b = " << p.b << endl;
//}

//升级成链式
ostream& operator<<(ostream& out, Person& p) {
	out << "a = " << p.a << " b = " << p.b << endl;
	return out;
}


int main() {
	Person p;
	p.a = 10;
	p.b = 20;


	//cout << p;

	cout << p << endl;


	return 0;
}


#endif // LEFT_SHITT_OVERRIDE
