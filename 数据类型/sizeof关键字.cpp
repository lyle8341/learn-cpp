#include <iostream>
#include "starter.h"
using namespace std;

#ifdef RUN_SIZEOF


//�﷨�� sizeof(�������� / ����)
int main() {
	long id = 1244555;
	cout << "long����ռ��: " << sizeof(id) << " �ֽ�" << endl;
	cout << "long�ؼ���ռ��: " << sizeof(long) << " �ֽ�" << endl;

	return 0;
}

#endif // RUN_SIZEOF