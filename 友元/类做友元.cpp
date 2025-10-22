#include "starter.h"


#ifdef CLASS_FRIEND

class House {

	//TODO House的好友列表
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

//类外写成员函数
House::House() {
	livingRoom = "客厅";
	bedroom = "卧室";
}

Family::Family() {
	house = new House;
}

void Family::visit() {
	cout << "家庭类正在访问: " << house->livingRoom << endl;
	cout << "家庭类正在访问: " << house->bedroom << endl;
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
