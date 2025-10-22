#include "starter.h"


#ifdef DEEP_SHALLOW_COPY

class Person {

public:
	Person() {
		cout << "Person默认构造函数调用" << endl;
	}

	Person(int age, int height) {
		this->age = age;
		this->height = new int(height);
	}

	//默认拷贝构造就是浅拷贝
	//自己实现拷贝构造函数，解决浅拷贝带来的问题
	Person(const Person& p) {
		cout << "Person拷贝构造函数调用" << endl;
		this->age = p.age;
		this->height = new int(*p.height);
	}

	~Person() {
		//将堆区开辟的数据做释放
		if (height != NULL) {
			delete height;
			height = NULL;
		}

		cout << "Person析构函数调用" << endl;
	}

	int age;
	int* height;

};

//浅拷贝带来的问题就是堆区内存重复释放
void test01() {
	Person p1(14, 150);

	cout << "p1的年龄: " << p1.age << " 身高: " << *p1.height << endl;

	Person p2(p1);
	cout << "p2的年龄: " << p2.age << " 身高: " << *p2.height << endl;
}

int main() {
	test01();
	return 0;
}

#endif // DEEP_SHALLOW_COPY
