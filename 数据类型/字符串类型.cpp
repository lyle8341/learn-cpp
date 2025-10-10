#include <iostream>
#include "starter.h"

using namespace std;


#ifdef STRING_TYPE
int main() {
	//C 风格字符串 char 变量名[] = "字符串值";
	char name[] = "lyle";
	cout << name << endl;
	cout << sizeof(name) << endl;// 4个字符+1个空终止符


	//C++ 风格字符串 string 变量名 = "字符串值";
	string motto = "just do it";
	cout << motto << endl;
	cout << sizeof(motto) << endl; //string类对象本身的大小
	cout << motto.size() << endl;
	cout << motto.length() << endl;
	return 0;
}
#endif // STRING_TYPE
