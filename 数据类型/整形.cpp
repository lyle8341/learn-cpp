#include <iostream>
using namespace std;

int main() {
	short a = 3;
	cout << "short占用: " << sizeof(a) << " 字节" << endl;

	int b = 43;
	cout << "int占用: " << sizeof(b) << " 字节" << endl;

	long c = 5333;
	cout << "long占用: " << sizeof(c) << " 字节" << endl;

	long long d = 2344;
	cout << "long long占用: " << sizeof(d) << " 字节" << endl;

	return 0;
}