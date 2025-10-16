#include "starter.h"

#ifdef FUNCTION_OBJ_USING

//TODO 重载函数调用符 的类，其对象称为 "函数对象"
//TODO 函数对象使用重载的 () 时，行为类似函数调用，故叫 "仿函数"

class MyAdd {
public:
	int operator()(int a, int b) {
		return a + b;
	}

};

//TODO 1.可以像普通函数那样调用，可以有参数、返回值
void test01() {
	MyAdd myadd;//函数对象
	cout << myadd(2, 3) << endl;
}

class MyPrint {
public:
	MyPrint() {
		this->count = 0;
	}
	void operator()(string text) {
		cout << text << endl;
		this->count++;
	}
	int count; //内部自己状态
};

//TODO 2.函数对象可以有自己的状态
void test02() {
	MyPrint myprint;
	myprint("hello");
	myprint("hello");
	myprint("hello");
	myprint("hello");
	cout << "myprint调用次数: " << myprint.count << endl;

}

void doPrint(MyPrint& mp, string text) {
	mp(text);
}

//TODO 3.函数对象可以作为参数传递
void test03() {
	MyPrint myprint;
	doPrint(myprint, "how do you do");
}

int main() {
	test01();
	test02();
	test03();
	return 0;
}

#endif // FUNCTION_OBJ_USING