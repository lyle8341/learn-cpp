#include "starter.h"


#ifdef CLASS_ACCESS_PRIVILEGE

//public		��Ա-���ڿɷ��ʣ�������Է���
//protected		��Ա-���ڿɷ��ʣ����ⲻ���Է��� ������Է��ʸ������ܱ����ĳ�Ա
//private		��Ա-���ڿɷ��ʣ����ⲻ���Է��� ���಻���Է��ʸ���˽�г�Ա

class Person {
public:
	string name;
protected:
	string car;
private:
	int password;

public:
	void func() {
		name = "����";
		car = "����";
		password = 123456;
	}

};


int main() {
	Person p1;
	p1.name = "����";
	//p1.car = "byd"; // inaccessible


	return 0;
}

#endif // CLASS_ACCESS_PRIVILEGE
