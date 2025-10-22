#include "starter.h"


#ifdef MULTI_EXTEND

//c++实际开发中不建议用多继承
class Base1 {
public:
	int a;

	Base1() {
		this->a = 100;
	}
};

class Base2 {
public:
	int a;

	Base2() {
		this->a = 200;
	}
};

class Son : public Base1, public Base2 {
public:
	Son() {
		this->c = 300;
		this->d = 400;
	}

	int c;
	int d;
};

void test01() {
	//TODO 利用开发人员命令提示符工具查看对象模型局命令:
	//TODO cl /d1 reportSingleClassLayout类名 类所在的cpp文件 ----> cl /d1 reportSingleClassLayoutSon 多继承.cpp
	//TODO cl /d1 reportSingleClassLayout类名 类所在的cpp文件 ----> cl /d1 reportSingleClassLayoutSon 多继承.cpp
	//TODO cl /d1 reportSingleClassLayout类名 类所在的cpp文件 ----> cl /d1 reportSingleClassLayoutSon 多继承.cpp
	cout << "size of Son = " << sizeof(Son) << endl;
}

void test02() {
	Son s;
	s.Base1::a;
	s.Base2::a;
	s.c;
	s.d;

}

int main() {
	test01();
	test02();

	return 0;
}

#endif // MULTI_EXTEND
