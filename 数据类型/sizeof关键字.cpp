#include "starter.h"

#ifdef RUN_SIZEOF


//语法： sizeof(数据类型 / 变量)
int main() {
	long id = 1244555;
	cout << "long变量占用: " << sizeof(id) << " 字节" << endl;
	cout << "long关键字占用: " << sizeof(long) << " 字节" << endl;

	return 0;
}

#endif // RUN_SIZEOF