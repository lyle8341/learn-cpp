#include "starter.h"


#ifdef EXTEND_CONSTRUCTOR_DESTRUCTOR

class Base {
public:
	Base() {
		cout << "Base构造函数" << endl;
	}

	~Base() {
		cout << "Base析构函数" << endl;
	}

};

class Son :public Base {
public:
	Son() {
		cout << "Son构造函数" << endl;
	}

	~Son() {
		cout << "Son析构函数" << endl;
	}

};

int main() {
	Son s;
	return 0;
}


#endif // EXTEND_CONSTRUCTOR_DESTRUCTOR
