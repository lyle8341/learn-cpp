#include "starter.h"


#ifdef METHOD_FRIEND

class House;

class Family {
public:
	Family();

	House* house;

	void activity();
};


class House {

	//House好友列表
	friend void Family::activity();

public:
	House();

public:
	string livingRoom;
private:
	string bedRoom;
};

House::House() {
	livingRoom = "客厅";
	bedRoom = "卧室";
}

Family::Family() {
	house = new House;
}


void Family::activity() {
	cout << "activity正在访问: " << house->livingRoom << endl;
	cout << "activity正在访问: " << house->bedRoom << endl;
}

//生命顺序和实现顺序很重要，有先后的哦
int main() {
	Family f;
	f.activity();
	return 0;
}

#endif // METHOD_FRIEND
