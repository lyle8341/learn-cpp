#include "starter.h"

#ifdef CHAR_TEST

int main() {
	//C和C++中字符型变量只占用1个字节
	//字符型变量并不是把字符本身放到内存中存储，而是将对应的ASCII编码放入到存储单元

	char ch = 'x';
	cout << ch << endl;
	cout << sizeof(char) << endl;
	return 0;
}

#endif // CHAR_TEST
