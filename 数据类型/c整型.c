#include "starter.h"

#ifdef C_INTEGER


int main() {
	//隐式转换,short char 类型的数据在参与计算时，先提升为int，再计算
	short a = 10;
	short b = 20;
	printf("a+b结果占用字节: %zu\n", sizeof(a + b));

	short result = (short)(a + b); //


	return 0;
}

#endif // C_INTEGER
