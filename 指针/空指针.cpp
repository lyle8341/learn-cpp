#include "starter.h"


#ifdef NULL_POINTER

//空指针： 指针变量指向内存中编号为0的空间
//用途：	  初始化指针变量
//空指针指向的内存是不可以访问的

int main() {

	//指针变量p指向的内存地址编号为0的空间
	int* p = NULL;
	cout << p << endl;

	//访问空指针报错
	//内存编号0~255为系统占用内存，不允许用户访问
	cout << *p << endl;


	return 0;
}


#endif // NULL_POINTER_DULING
