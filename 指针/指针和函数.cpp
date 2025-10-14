#include "starter.h"


#ifdef POINTER_AND_FUNCTION

//ֵ����
void swap01(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "swap01 a = " << a << "\tb = " << b << endl;
}
//��ַ����
void swap02(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
	cout << "swap02 a = " << *a << "\tb = " << *b << endl;
}


int main() {
	int a = 23;
	int b = 54;

	//swap01(a, b);
	swap02(&a, &b);

	cout << "a = " << a << "\tb = " << b << endl;
}
#endif // POINTER_AND_FUNCTION