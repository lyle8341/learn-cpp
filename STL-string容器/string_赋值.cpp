#include "starter.h"

#ifdef STRING_CONTAINER_ASSIGN

int main() {
	//1.
	string str1;
	str1 = "hello world";

	//2.
	string str2;
	str2 = str1;

	//3.
	string str3;
	str3 = 'a';

	//4.
	string str4;
	str4.assign("c++");

	//5.
	string str5;
	str5.assign("umbrella", 4);

	//6.
	string str6;
	str6.assign(str5);

	//7.
	string str7;
	str7.assign(10, 'w');

	return 0;
}

#endif // STRING_CONTAINER_ASSIGN