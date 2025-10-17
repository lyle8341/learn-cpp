#include "starter.h"


#ifdef CLASS_TEMPLATE_FRIEND

template<class T1, class T2>
class Person;

//����ʵ��
template<class T1, class T2>
void printPerson2(Person<T1, T2> p) {
	cout << "����ʵ��--> " << "����: " << p.name << " ����: " << p.age << endl;
}

template<class T1, class T2>
class Person {
public:
	Person(T1 name, T2 age) {
		this->name = name;
		this->age = age;
	}
	//ȫ�ֺ���������ʵ�֣��򵥣�
	friend void printPerson(Person<T1, T2> p) {
		cout << "����ʵ��--> " << "����: " << p.name << " ����: " << p.age << endl;
	}

	//ȫ�ֺ��� ����ʵ��
	//TODO �ӿ�ģ������б�
	//TODO ���ȫ�ֺ���������ʵ�֣���Ҫ�ñ�������ǰ֪����������Ĵ���	
	friend void printPerson2<>(Person<T1, T2> p);

private:
	T1 name;
	T2 age;
};

//1. ȫ�ֺ��� ����ʵ��
void test01() {
	Person<string, int> p("lyle", 30);
	//TODO ģ�����������
	//TODO ADL(������������)���һ���
	//TODO ��ʽ���ɾ����ⲿ���ӵĺ���

	//��֤����ȫ�ֺ���
		//��ʽһ����ͨ�ࣨ��ģ���ࣩ
		//��ʽ������ʾ����(::printPerson())
	printPerson(p);//����������ȫ�ֺ���
}

void test02() {
	Person<string, int> p("lyle", 30);
	printPerson2(p);
}

int main() {
	test01();
	test02();
	return 0;
}

#endif // CLASS_TEMPLATE_FRIEND