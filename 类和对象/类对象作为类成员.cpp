#include "starter.h"


#ifdef CLASS_OBJ_AS_CLASS_FIELD

class Phone {
public:

	Phone(string brand) {
		this->brand = brand;
		cout << "先构造手机" << endl;
	}

	string brand;
};

class Person {
public:

	//初始化列表
	//隐式转换 Phone myPhone = brand;
	Person(string name, string brand) :m_name(name), myPhone(brand) {
		cout << "再构造人" << endl;
	}

	string m_name;
	Phone myPhone;

};

void test01() {
	Person p("lyle", "iphone");

}
//当其他类对象作为本类成员，先构造本类成员，再构造本类，析构顺序相反
int main() {
	test01();
	return 0;
}


#endif // CLASS_OBJ_AS_CLASS_FIELD
