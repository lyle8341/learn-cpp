#include "starter.h"



#ifdef POINTER_ADDRESS

int main() {
	int a = 10;
	int* p = &a;
	cout << "p(��ĵ�ַ):\t\t" << (void*)p << endl;
	cout << "&p(p�Լ��ĵ�ַ):\t" << &p << endl;

	return 0;
}

#endif // POINTER_ADDRESS
