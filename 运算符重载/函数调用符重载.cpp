#include "starter.h"

#ifdef FUNCTION_INVOKE_OPERATOR

//������������� () Ҳ��������
//TODO �������غ�ʹ�÷�ʽ�ǳ������ĵ��ã���˳�Ϊ�º���
//�º���û�й̶�д�����ǳ����

class MyPrint {
public:
	void operator()(string text) {
		cout << text << endl;
	}

};

void myPrint02(string text) {
	cout << text << endl;
}

void test01() {
	MyPrint myPrint;
	myPrint("hello");
	myPrint02("world");
}


class Myadd {

public:
	int operator()(int a, int b) {
		return a + b;
	}

};

void test02() {
	Myadd ma;
	int result = ma(12, 28);
	cout << "ret = " << result << endl;

	//�� Project(��Ͷ���)�� ���캯���ķ��༰����.cpp
	//TODO ���������������
	cout << Myadd()(100, 200) << endl;

}

int main() {
	test01();
	test02();
	return 0;
}
#endif // FUNCTION_INVOKE_OPERATOR
