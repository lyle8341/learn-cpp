#include <iostream>
#include "starter.h"

using namespace std;

#ifdef MEM_FOUR_REGION_STACK

//��Ҫ���ؾֲ������ĵ�ַ
int* func() {
	int a = 10;
	return &a;
}

int main() {
	int* result = func();
	int b = 34;
	cout << *result << endl;
	cout << *result << endl;
	cout << *result << endl;
	cout << *result << endl;
	cout << *result << endl;
	return 0;
}

#endif // MEM_FOUR_REGION_STACK
