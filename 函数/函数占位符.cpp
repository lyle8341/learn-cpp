#include <iostream>
#include "starter.h"

using namespace std;


#ifdef FUNCTION_PLACEHOLDER

//�﷨: ����ֵ���� ������ (��������) {}

void func(int a, int) {
	cout << "this is func" << endl;
}


void func2(int a, int b = 20) {
	cout << "this is func2" << endl;
}

int main() {
	func(10, 10);//ռλ���������
	func2(15);
	return 0;
}

#endif // FUNCTION_PLACEHOLDER
