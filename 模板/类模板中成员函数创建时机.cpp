#include "starter.h"



#ifdef CLASS_TEMPLATE_FUNCTION_CREATE_TIME

//TODO ��ͨ���еĳ�Ա����һ��ʼ�Ϳ��Դ���
//TODO ��ģ���еĳ�Ա�����ڵ���ʱ�Ŵ����������ò�����

class Person_1 {
public:
	void showP1() {
		cout << "person_1 show" << endl;
	}
};

class Person_2 {
public:
	void showP2() {
		cout << "person_2 show" << endl;
	}
};

template<class T>
class MyKlass {
public:
	T obj;

	//TODO ��ģ���еĳ�Ա��������ʱ�Ŵ���������ʱ�Ŵ���
	void func1() {
		obj.showP1();
	}

	void func2() {
		obj.showP2();
	}
};

int main() {
	MyKlass<Person_1> myKlass;
	myKlass.func1();
	//myKlass.func2();
	return 0;
}
#endif // CLASS_TEMPLATE_FUNCTION_CREATE_TIME