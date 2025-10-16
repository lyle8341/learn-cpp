#include "starter.h"

#ifdef CLASS_TEMPLATE_EXTEND

template<class T>
class Base {
public:
	T m;
};

//TODO �������Ҫ֪�������е�T����
class Son : public Base<int> {

};

void test01() {
	Son s;
}

//TODO ��������ָ��������T���ͣ�����Ҳ��Ҫ��Ϊ��ģ��
template<class T1, class T2>
class GodSon :public Base<T2> {
public:
	GodSon() {
		cout << "T1������: " << typeid(T1).name() << endl;
		cout << "T2������: " << typeid(T2).name() << endl;
	}
	T1 obj;
};

void test02() {
	GodSon<int, char> son;
}

int main() {
	test01();
	test02();
	return 0;
}
#endif // CLASS_TEMPLATE_EXTEND