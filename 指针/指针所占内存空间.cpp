#include "starter.h"


#ifdef POINTER_MEM_OCCUPY

int main() {
	int a = 20;
	int* p = &a;

	//在32位操作系统下，指针占4个字节，无论什么数据类型
	//在64位操作系统下，指针占8个字节，无论什么数据类型
	cout << "sizeof(int*) = " << sizeof(p) << endl;
	cout << "sizeof(int*) = " << sizeof(int*) << endl;
	cout << "sizeof(char*) = " << sizeof(char*) << endl;
	cout << "sizeof(float*) = " << sizeof(float*) << endl;
	cout << "sizeof(double*) = " << sizeof(double*) << endl;

	return 0;
}


#endif // POINTER_MEM_OCCUPY
