#include "starter.h"


#ifdef PASS_BY_VALUE

void swap(int a, int b) {
	cout << "交换前： a = " << a << "; b = " << b << endl;
	if (a != b) {
		int temp = a;
		a = b;
		b = temp;
	}
	cout << "交换后： a = " << a << "; b = " << b << endl;
}

int main() {
	int a = 10;
	int b = 89;

	cout << "实参： a = " << a << "; b = " << b << endl;
	swap(a, b);
	cout << "实参： a = " << a << "; b = " << b << endl;
	return 0;
}

#endif // PASS_BY_VALUE
