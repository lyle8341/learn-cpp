#include <iostream>
#include "starter.h"

using namespace std;

#ifdef REFERENCE_NATURE

//
void func(int& ref) {
	ref = 100; //
}



int main() {

	//���õı���(ָ�볣��)

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
	//�������Զ�ת��Ϊ int* const ref = &a;
	int& ref = a;
	//�ڲ�����ref�����ã��Զ�������ת��Ϊ�� *ref = 20;
	ref = 20;
}

#endif // REFERENCE_NATURE
