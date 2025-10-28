/*
*
* 常量： 在程序执行过程中值不会改变的量。
*	① 字面常量：被书写到代码内的常量称之为"字面常量"，也称"字面量"
*	② 符号常量：使用标识符去定义常量，称之为"符号常量"
*
*
*
*
* c++ 定义符号常量两种方式
* 1. #define 宏常量:	#define 标识符(常量名) 常量值
* 	- 通常在文件上方定义，表示一个常量（不需要分号结尾）
*
* 2. const修饰的变量:	const 数据类型 常量名 = 常量值
* 	- 通常在变量定义前加关键字 const，修饰该变量为常量，不可修改
*/

#include <iostream>
//#include <windows.h>
using namespace std;

//1. 宏常量
#define day 7


int main() {
	//system("chcp 65001");
	//SetConsoleOutputCP(CP_UTF8);
	cout << "一周共有 " << day << " 天" << endl;
	//day = 8; //报错，宏常量不可以修改

	// 2.const修饰的变量
	const int month = 12;
	//month = 24; // 报错，常量是不可用修改的

}