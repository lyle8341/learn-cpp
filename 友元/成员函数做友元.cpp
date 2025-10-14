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

	//House�����б�
	friend void Family::activity();

public:
	House();

public:
	string livingRoom;
private:
	string bedRoom;
};

House::House() {
	livingRoom = "����";
	bedRoom = "����";
}

Family::Family() {
	house = new House;
}


void Family::activity() {
	cout << "activity���ڷ���: " << house->livingRoom << endl;
	cout << "activity���ڷ���: " << house->bedRoom << endl;
}

//����˳���ʵ��˳�����Ҫ�����Ⱥ��Ŷ
int main() {
	Family f;
	f.activity();
	return 0;
}

#endif // METHOD_FRIEND
