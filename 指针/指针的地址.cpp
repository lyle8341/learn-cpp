#include "starter.h"



#ifdef POINTER_ADDRESS

int main() {
	int a = 10;
	int* p = &a;
	cout << "p(存的地址):\t\t" << (void*)p << endl;
	cout << "&p(p自己的地址):\t" << &p << endl;

	return 0;
}

#endif // POINTER_ADDRESS
