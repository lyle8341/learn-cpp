
/*
c++ 定义常量两种方式
1. #define 宏常量:	#define 常量名 常量值
	- 通常在文件上方定义，表示一个常量

2. const修饰的变量:	const 数据类型 常量名 = 常量值
	- 通常在变量定义前加关键字 const，修饰该变量为常量，不可修改
*/

//1. 宏常量
#define day 7

#include <iostream>
using namespace std;

int main() {

	cout << "一周共有 " << day << " 天" << endl;
	//day = 8; //报错，宏常量不可以修改

	// 2.const修饰的变量
	const int month = 12;
	//month = 24; // 报错，常量是不可用修改的

}