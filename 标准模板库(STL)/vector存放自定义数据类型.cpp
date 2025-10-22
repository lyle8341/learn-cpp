#include "starter.h"

#ifdef VECTOR_CUSTOM_TYPE

class Person {
public:
	Person(string name, int age) {
		this->name = name;
		this->age = age;
	}

	//vector 中有四个元素
	//TODO vector析构4次，局部变量析构4次，vector扩容析构n次
	~Person() {
		cout << "name = " << this->name << " 的对象析构了" << endl;
	}

	string name;
	int age;
};

void myPrint(const Person& p) {
	cout << "姓名: " << p.name << "\t年龄: " << p.age << endl;
}

//存放自定义类型
void test01() {
	vector<Person> v;
	Person p1("唐僧", 30);
	Person p2("悟能", 30);
	Person p3("悟空", 30);
	Person p4("悟净", 30);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	//第三种遍历 利用STL提供的遍历算法
	for_each(v.begin(), v.end(), myPrint);


	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << (*it).name << "\t" << (*it).age << endl;
		cout << it->name << "\t" << it->age << endl;
	}
}

//存放自定义类型指针
void test02() {
	vector<Person*> v;

	Person p1("唐僧", 30);
	Person p2("悟能", 30);
	Person p3("悟空", 30);
	Person p4("悟净", 30);
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);

	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << (*it)->name << "\t" << (*it)->age << endl;
	}
}

int main() {
	// test01();
	test02();
	return 0;
}
#endif // VECTOR_CUSTOM_TYPE
