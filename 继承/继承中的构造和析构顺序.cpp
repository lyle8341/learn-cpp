#include "starter.h"


#ifdef EXTEND_CONSTRUCTOR_DESTRUCTOR

class Base {
public:
	Base() {
		cout << "Base���캯��" << endl;
	}

	~Base() {
		cout << "Base��������" << endl;
	}

};

class Son :public Base {
public:
	Son() {
		cout << "Son���캯��" << endl;
	}

	~Son() {
		cout << "Son��������" << endl;
	}

};

int main() {
	Son s;
	return 0;
}


#endif // EXTEND_CONSTRUCTOR_DESTRUCTOR
