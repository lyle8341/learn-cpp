#include "starter.h"


#ifdef CONSTRUCT_DESTRUCTOR_FUNCTION


class Person {

	//1.构造函数 进行初始化操作
	//创建对象的时候，构造函数会自动调用，而且只调用一次
public:
	Person() {
		cout << "Person 构造函数被调用" << endl;
	}

	//2.析构函数 进行清理操作
	//析构函数不可以有参数，不可以发生重载
	//对象在销毁前会自动调用析构函数，而且只会调用一次
	~Person() {
		cout << "Person 析构函数被调用" << endl;
	}




};

void test01() {
	Person p;//在栈上的数据，本方法执行完毕后，释放这个对象
}

int main() {

	test01();
	return 0;
}


#endif // CONSTRUCT_DESTRUCTOR_FUNCTION
