#include "starter.h"


#ifdef PASS_BY_VALUE

void swap(int a, int b) {
	cout << "����ǰ�� a = " << a << "; b = " << b << endl;
	if (a != b) {
		int temp = a;
		a = b;
		b = temp;
	}
	cout << "������ a = " << a << "; b = " << b << endl;
}

int main() {
	int a = 10;
	int b = 89;

	cout << "ʵ�Σ� a = " << a << "; b = " << b << endl;
	swap(a, b);
	cout << "ʵ�Σ� a = " << a << "; b = " << b << endl;
	return 0;
}

#endif // PASS_BY_VALUE
