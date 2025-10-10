#include <iostream>
#include "starter.h"

using namespace std;

#ifdef REFERENCE_NATURE

//
void func(int& ref) {
	ref = 100; //
}



int main() {

	//引用的本质(指针常量)

	/*
	 *   mov     DWORD PTR [rbp-12], 12
	 *   lea     rax, [rbp-12]
	 *   mov     QWORD PTR [rbp-8], rax
	 */
	int m = 12;
	int* pn = &m;

	/*
	 *   mov     DWORD PTR [rbp-12], 20
	 *   lea     rax, [rbp-12]
	 *   mov     QWORD PTR [rbp-8], rax
	 */
	int x = 20;
	int& y = x;


	int a = 10;
	//编译器自动转换为 int* const ref = &a;
	int& ref = a;
	//内部发现ref是引用，自动帮我们转换为： *ref = 20;
	ref = 20;
}

#endif // REFERENCE_NATURE
