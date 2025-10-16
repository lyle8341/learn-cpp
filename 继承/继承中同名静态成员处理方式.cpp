#include "starter.h"

#ifdef EXTEND_STATIC_SAME_NAME_FIELD

class Base {
public:
	static int a;

	static void func() {
		cout << "Base funct called" << endl;
	}
};

int Base::a = 100;

class Son :public Base {
public:
	static int a;

	static void func() {
		cout << "Son funct called" << endl;
	}
};

int Son::a = 50;

int main() {
	Son s;
	cout << "���ྲ̬ͬ������:" << s.Base::a << endl;
	cout << "���ྲ̬ͬ������:" << s.a << endl;
	s.func();
	s.Base::func();

	cout << "���ྲ̬ͬ������:" << Son::Base::a << endl;
	cout << "���ྲ̬ͬ������:" << Son::a << endl;
	Son::func();
	Son::Base::func();


	return 0;
}


#endif // EXTEND_STATIC_SAME_NAME_FIELD
