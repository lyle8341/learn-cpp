#include <iostream>
#include "starter.h"

using namespace std;


#ifdef MEM_FOUR_REGION_HEAP
int* func() {
	//����new�ؼ��� �����ݿ��ٵ�����
	//ָ�뱾��Ҳ�Ǿֲ�����������ջ�ϣ�ָ�뱣��������Ƿ��ڶ���
	int* p = new int(10);
	return p;
}

int main() {
	int* p = func();
	cout << *p << endl;
	return 0;
}
#endif // MEM_FOUR_REGION_HEAP