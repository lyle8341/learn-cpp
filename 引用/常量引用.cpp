#include "starter.h"


#ifdef CONST_REFERENCE

// 在函数形参列表中，可以加const修饰形参，防止形参改变实参

void showValue(const int& v) {
	//v += 10;
	cout << v << endl;
}

int main() {

	//int& ref = 10;  //10是一个常量，引用必须引一块合法的内存空间，因此这个报错

	//加入const就可以了
	//编译器优化代码 int temp = 10; const int& ref = temp;
	const int& ref = 10;


	int x = 90;
	//有的编译器会报错
	int& const r = x; // 因为引用本身不可重新绑定，所以无需设计 "引用常量"

	cout << "over" << endl;
}


#endif // CONST_REFERENCE
