#include "starter.h"

#ifdef CLASS_TEMPLATE_EXTEND

template<class T>
class Base {
public:
	T m;
};

//TODO 子类必须要知道父类中的T类型
class Son : public Base<int> {

};

void test01() {
	Son s;
}

//TODO 如果想灵活指定父类中T类型，子类也需要变为类模板
template<class T1, class T2>
class GodSon :public Base<T2> {
public:
	GodSon() {
		cout << "T1的类型: " << typeid(T1).name() << endl;
		cout << "T2的类型: " << typeid(T2).name() << endl;
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