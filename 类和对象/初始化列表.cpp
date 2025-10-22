#include "starter.h"


#ifdef INIT_LIST

class Person {
public:

	/*Person(int a, int b, int c) {
		m_a = a;
		m_b = b;
		m_c = c;
	}*/

	//初始化列表-> 初始化属性
	Person() :m_a(10), m_b(20), m_c(30) {

	}

	Person(int a, int b, int c) :m_a(a), m_b(b), m_c(c) {
		//其他逻辑
	}



	int m_a;
	int m_b;
	int m_c;

};

void test01() {
	//Person p(10, 20, 30);
	//Person p;
	Person p(12, 22, 32);

	cout << "a: " << p.m_a << " b: " << p.m_b << " c: " << p.m_c << endl;
}

int main() {
	test01();


	return 0;
}
#endif // INIT_LIST
