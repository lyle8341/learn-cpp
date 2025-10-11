#include <iostream>
#include "starter.h"

using namespace std;

#ifdef REFERENCE_AS_PARAM

//ֵ����
void swap01(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

//��ַ����
void swap02(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

//���ô���
void swap03(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	int a = 10;
	int b = 20;
	//swap01(a, b);
	//swap02(&a, &b);
	swap03(a, b);
	
	
	
	cout << "a = " << a << "\tb = " << b << endl;

	return 0;
}

#endif // REFERENCE_AS_PARAM
