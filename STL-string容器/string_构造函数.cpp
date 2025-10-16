#include "starter.h"


#ifdef STRING_CONTAINER_CONSTRUCTOR

//TODO string本质是一个类

void test01() {
	//TODO 默认构造
	string s1;
	
	//TODO 使用字符串s初始化
	const char* str = "hello world"; //c语言风格字符串
	string s2(str);
	
	//TODO 拷贝构造
	string s3(s2);

	//TODO 使用n个字符c初始化
	string s4(4,'n');

	cout << "s2 = " << s2 << endl;
	cout << "s3 = " << s3 << endl;
	cout << "s4 = " << s4 << endl;
}

int main() {
	test01();
	return 0;
}


#endif // STRING_CONTAINER_CONSTRUCTOR
