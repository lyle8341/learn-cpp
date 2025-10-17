#include "starter.h"

#ifdef CLASS_TEMPLATE_AS_FUNCTION_PARAM


//��ģ��ʵ�������Ķ����������εķ�ʽ
	//1.ָ�����������
	//2.����ģ�廯
	//3.������ģ�廯

template<class T1, class T2>
class Person {
public:
	Person(T1 name, T2 age) {
		this->name = name;
		this->age = age;
	}

	void showPerson() {
		cout << "����: " << this->name << " ����: " << this->age << endl;
	}

	T1 name;
	T2 age;
};

//TODO *1.ָ�����������
void printPerson_a(Person<string, int>& p) {
	p.showPerson();
}
//TODO 2.����ģ�廯
template<class T1, class T2>
void printPerson_b(Person<T1, T2>& p) {
	p.showPerson();
	//TODO �鿴ģ���������
	cout << "T1������Ϊ: " << typeid(T1).name() << endl;
	cout << "T2������Ϊ: " << typeid(T2).name() << endl;
}
//TODO 3.������ģ�廯
template<class T>
void printPerson_c(T& p) {
	p.showPerson();
	cout << "T������Ϊ: " << typeid(T).name() << endl;
}

void test01() {
	Person<string, int> p("�����", 600);
	printPerson_a(p);
	printPerson_b(p);
	printPerson_c(p);
}

int main() {
	test01();
	return 0;
}
#endif // CLASS_TEMPLATE_AS_FUNCTION_PARAM