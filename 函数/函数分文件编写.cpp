#include "starter.h"
#include "swap.h"


//�������ļ���дһ����4������
//1.������׺��Ϊ.h��ͷ�ļ�(swap.h)
//2.������׺��Ϊ.cpp��Դ�ļ�(�������ļ���д.cpp)
//3.��ͷ�ļ���д����������
//4.��Դ�ļ���д�����Ķ��岢����ͷ�ļ�


#ifdef FUNCTION_SPLIT_MULTI_FILE

int main() {
	int x = 34;
	int y = 21;
	swap(x, y);

	return 0;
}

void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "a = " << a << "\tb = " << b << endl;
}

#endif // FUNCTION_SPLIT_MULTI_FILE