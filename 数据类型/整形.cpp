#include "starter.h"

#ifdef RUN_INTEGER


int main() {
	short a = 3;
	cout << "short����ռ��: " << sizeof(a) << " �ֽ�" << endl;
	cout << "shortռ��: " << sizeof(short) << " �ֽ�" << endl;

	int b = 43;
	cout << "int����ռ��: " << sizeof(b) << " �ֽ�" << endl;
	cout << "int����ռ��: " << sizeof(int) << " �ֽ�" << endl;

	long c = 5333;
	cout << "long����ռ��: " << sizeof(c) << " �ֽ�" << endl;
	cout << "long����ռ��: " << sizeof(long) << " �ֽ�" << endl;

	long long d = 2344;
	cout << "long long����ռ��: " << sizeof(d) << " �ֽ�" << endl;
	cout << "long long����ռ��: " << sizeof(long long) << " �ֽ�" << endl;

	return 0;
}

#endif // RUN_INTEGER