#include <iostream>
#include "starter.h"

using namespace std;


#ifdef CONST_DECORATE_POINTER

int main() {
	int a = 10;
	int b = 10;

	//记忆方法：const挨着int--->值是常量，不能改值
	//1.常量指针： 指针指向可以修改，但是指针指向的值不可以修改
	const int* p = &a;
	p = &b; //指针指向可以修改
	//*p = 43; //报错，指针指向的值不可以修改


	int x = 20;
	int y = 20;
	//记忆方法：const挨着指针地址--->指针地址是常量，指向不能改
	//2.指针常量： 指针指向不可以修改，指针指向的值可以修改
	int* const px = &x;
	*px = 89; //指针指向的值可以修改
	//px = &y; //报错，指针指向不可以修改


	//3.const修饰指针和常量
	int m = 30;
	int n = 30;
	const int* const pm = &m;

	//*pm = 2000; //报错，指针指向的值不可以修改
	//pm = &n; //报错，指针指向不可以修改

	return 0;
}

#endif // CONST_DECORATE_POINTER
