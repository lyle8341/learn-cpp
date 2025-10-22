#include "starter.h"


#ifdef COPY_CONSTRUCT_CALLED_TIME

class Person {
public:
	Person() {
		cout << "Person默认构造函数调用" << endl;
	}

	Person(int age) {
		this->age = age;
		cout << "Person有参构造函数调用" << endl;
	}

	Person(const Person& p) {
		this->age = p.age;
		cout << "Person拷贝构造函数调用" << endl;
	}

	~Person() {
		cout << "Person析构函数调用" << endl;
	}

	int age;


};

//1.使用一个已经创建完毕的对象来初始化一个新对象
void test01() {
	Person p1(20);
	Person p2(p1);
}

//2.值传递的方式给函数参数传值
void doWork(Person p) {

}

void test02() {
	Person p;
	doWork(p);
}

//3.值方式返回局部对象
Person doWork2() {
	Person p1;
	cout << (int*)&p1 << endl;
	return p1;
}

void test03() {
	Person p = doWork2();
	cout << (int*)&p << endl;

}

int main() {
	//test01();
	//test02();
	test03();


	return 0;
}
#endif // COPY_CONSTRUCT_CALLED_TIME