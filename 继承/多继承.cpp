#include "starter.h"


#ifdef MULTI_EXTEND

//c++ʵ�ʿ����в������ö�̳�
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
	//TODO ���ÿ�����Ա������ʾ�����߲鿴����ģ�;�����:
	//TODO cl /d1 reportSingleClassLayout���� �����ڵ�cpp�ļ� ----> cl /d1 reportSingleClassLayoutSon ��̳�.cpp
	//TODO cl /d1 reportSingleClassLayout���� �����ڵ�cpp�ļ� ----> cl /d1 reportSingleClassLayoutSon ��̳�.cpp
	//TODO cl /d1 reportSingleClassLayout���� �����ڵ�cpp�ļ� ----> cl /d1 reportSingleClassLayoutSon ��̳�.cpp
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
