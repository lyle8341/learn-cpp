#include <iostream>
#include "starter.h"

using namespace std;


#ifdef MEM_FOUR_REGION_HEAP
int* func() {
	//利用new关键字 将数据开辟到堆区
	//指针本质也是局部变量，放在栈上，指针保存的数据是放在堆区
	int* p = new int(10);
	return p;
}

int main() {
	int* p = func();
	cout << *p << endl;
	return 0;
}
#endif // MEM_FOUR_REGION_HEAP