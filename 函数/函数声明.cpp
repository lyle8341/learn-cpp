#include <iostream>
#include "starter.h"

using namespace std;


#ifdef FUNCTION_DECLARE

//�������������Զ�Σ����Ǻ����Ķ���ֻ����һ��

//��������ǰ���߱����������Ĵ���
int max(int a, int b);
int max(int a, int b);

int main() {
	int a = 45;
	int b = 876;
	cout << max(a, b) << endl;
	return 1;
}

//����
int max(int a, int b) {
	return a > b ? a : b;
}

#endif // FUNCTION_DECLARE
