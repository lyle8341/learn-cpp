#include <iostream>
#include "starter.h"

using namespace std;


#ifdef DATA_INPUT

int main() {
	// 整形
	int a = 0;
	cout << "请给整形变量a赋值：" << endl;
	cin >> a;
	cout << "整形变量 a = " << a << endl;

	//浮点
	float f = 3.14f;
	cout << "请给浮点型变量f赋值：" << endl;
	cin >> f;
	cout << "整形变量 f = " << f << endl;

	//字符型
	char ch = 'x';
	cout << "请给字符型变量ch赋值：" << endl;
	cin >> ch;
	cout << "整形变量 ch = " << ch << endl;

	//字符串型
	string str = "hello";
	cout << "请给字符串变量str赋值：" << endl;
	cin >> str;
	cout << "整形变量 str = " << str << endl;

	//布尔类型
	bool flag = true;
	cout << "请给布尔变量flag赋值：" << endl;
	cin >> flag;
	cout << "整形变量 flag = " << flag << endl;

	return 0;
}
#endif // DATA_INPUT
