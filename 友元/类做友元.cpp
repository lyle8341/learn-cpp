#include "starter.h"


#ifdef CLASS_FRIEND

class House {

	//House�ĺ����б�
	friend class Family;

public:
	House();
public:
	string livingRoom;
private:
	string bedroom;

};

class Family {
public:
	Family();

public:

	House* house;

	void visit();
};

//����д��Ա����
House::House() {
	livingRoom = "����";
	bedroom = "����";
}

Family::Family() {
	house = new House;
}

void Family::visit() {
	cout << "��ͥ�����ڷ���: " << house->livingRoom << endl;
	cout << "��ͥ�����ڷ���: " << house->bedroom << endl;
}

void test01() {
	Family f;
	f.visit();
}

int main() {
	test01();
	return 0;
}

#endif // CLASS_FRIEND
