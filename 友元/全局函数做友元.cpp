#include "starter.h"


#ifdef GLOBAL_FUNCTION_FRIEND

class House {

	//House的好友列表
	//family全局函数是 House的好朋友，可以访问House中私有成员
	friend void family(House* house);

public:
	House() {
		livingRoom = "客厅";
		bedroom = "卧室";
	}


public:
	string livingRoom;

private:
	string bedroom;

};

//TODO 全局函数
void family(House* house) {
	cout << "家人全局函数 正在访问: " << house->livingRoom << endl;
	cout << "家人全局函数 正在访问: " << house->bedroom << endl;
}

void test01() {
	House h;
	family(&h);
}

int main() {
	test01();
	return 0;
}


#endif // GLOBAL_FUNCTION_FRIEND
