#include "starter.h"

#ifdef FUNCTION_OBJ_USING

//TODO ���غ������÷� ���࣬������Ϊ "��������"
//TODO ��������ʹ�����ص� () ʱ����Ϊ���ƺ������ã��ʽ� "�º���"

class MyAdd {
public:
	int operator()(int a, int b) {
		return a + b;
	}

};

//TODO 1.��������ͨ�����������ã������в���������ֵ
void test01() {
	MyAdd myadd;//��������
	cout << myadd(2, 3) << endl;
}

class MyPrint {
public:
	MyPrint() {
		this->count = 0;
	}
	void operator()(string text) {
		cout << text << endl;
		this->count++;
	}
	int count; //�ڲ��Լ�״̬
};

//TODO 2.��������������Լ���״̬
void test02() {
	MyPrint myprint;
	myprint("hello");
	myprint("hello");
	myprint("hello");
	myprint("hello");
	cout << "myprint���ô���: " << myprint.count << endl;

}

void doPrint(MyPrint& mp, string text) {
	mp(text);
}

//TODO 3.�������������Ϊ��������
void test03() {
	MyPrint myprint;
	doPrint(myprint, "how do you do");
}

int main() {
	test01();
	test02();
	test03();
	return 0;
}

#endif // FUNCTION_OBJ_USING