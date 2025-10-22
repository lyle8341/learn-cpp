#include "starter.h"


#ifdef CONSTRUCT_FUNCTION_TYPE_CALLED

//1.构造函数的分类及调用

class Person {
public:
	//无参构造函数
	Person() {
		cout << "Person的无参构造函数调用" << endl;
	}

	Person(int a) {
		age = a;
		cout << "Person的有参构造函数调用" << endl;
	}


	//拷贝构造函数
	Person(const Person& p) {
		//将传入对象的所有属性拷贝到我自己身上
		age = p.age;
		cout << "Person的拷贝构造函数调用" << endl;
	}


	~Person() {
		cout << "Person的析构函数调用" << endl;
	}


	int age;


};


void test01() {

	//1.括号法
	Person p1;		//默认构造函数调用
	Person p2(10);	//有参构造函数
	Person p3(p2);	//拷贝构造函数

	//注意事项
	//调用默认构造函数时候，不要加()，否则编译器以为是函数声明呢
	Person declare();

	//2.显式法
	Person pa = Person(20); // 有参构造

	Person pc = Person(pa); // 拷贝构造

	Person(30); //匿名对象，特点：当前行执行结束后，系统会立即回收掉匿名对象

	//不要利用拷贝构造函数初始化匿名对象，因为编译器会认为 Person(pa) === Person pa; 发生重定义了
	//Person(pa);

	//3.隐式转换法
	Person px = 10; //相当于写了 Person px = Person(10);
	Person py = px; //拷贝构造

}

int main() {
	test01();
	return 0;
}
#endif // CONSTRUCT_FUNCTION_TYPE_CALLED