#include "starter.h"

#ifdef RUN_INTEGER


int main() {
	short a = 3;
	cout << "short变量占用: " << sizeof(a) << " 字节" << endl;
	cout << "short占用: " << sizeof(short) << " 字节" << endl;

	int b = 43;
	cout << "int变量占用: " << sizeof(b) << " 字节" << endl;
	cout << "int变量占用: " << sizeof(int) << " 字节" << endl;

	long c = 5333;
	cout << "long变量占用: " << sizeof(c) << " 字节" << endl;
	cout << "long变量占用: " << sizeof(long) << " 字节" << endl;

	long long d = 2344;
	cout << "long long变量占用: " << sizeof(d) << " 字节" << endl;
	cout << "long long变量占用: " << sizeof(long long) << " 字节" << endl;

	return 0;
}

#endif // RUN_INTEGER