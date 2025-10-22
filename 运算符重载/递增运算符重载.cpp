#include "starter.h"


#ifdef PLUS_PLUS_OVERRIDE

class MyInteger {

	friend ostream& operator<<(ostream& out, MyInteger mi);


public:
	MyInteger() {
		this->num = 0;
	}


	//重载前置++
	//如果重载++返回的不是引用，则每次是对新对象递增，原对象并没有同步改变
	//++(++(++(++(++mi))))
	MyInteger& operator++() {
		num++;
		return *this;
	}


	//重置后置++
	//int代表占位符，可以区分前置和后置，见Project(函数)中函数占位符.cpp
	MyInteger operator++(int) {
		MyInteger temp = *this;//temp是局部对象
		num++;
		return temp;
	}

private:
	int num;
};


ostream& operator<<(ostream& out, MyInteger mi) {
	out << mi.num << endl;
	return out;
}


void test01() {
	MyInteger mi;
	cout << ++mi << endl;		//1
	cout << ++(++mi) << endl;	//3
	cout << mi << endl;			//3
}


void test02() {
	MyInteger mi;
	cout << mi++ << endl;
	cout << mi << endl;
}


int main() {
	//test01();
	test02();
	return 0;
}
#endif // PLUS_PLUS_OVERRIDE
