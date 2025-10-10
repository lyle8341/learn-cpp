#include <iostream>
#include "starter.h"

using namespace std;


#ifdef FUNCTION_OVERRIDE

void func(int& a) {
	cout << "func(int& a) has been called" << endl;
}

void func(const int& a) {
	cout << "func(const int& a) has been called" << endl;
}


int main() {
	int a = 110;
	func(a);

	func(90);

	return 0;
}

#endif // FUNCTION_OVERRIDE
