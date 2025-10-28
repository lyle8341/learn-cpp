#include "starter.h"

#ifdef STRING_CONCAT

int main() {
	string str1 = "good";
	//1.
	str1 += " morning";

	//2.
	str1 += ':';

	//3.
	string str2 = " lyle";
	str1 += str2;

	//4.
	string str3 = "I love ";
	str3.append("sea ");

	//5.
	str3.append("food fruit", 5);//参数2： 前n个字符

	//6.
	str3.append(str1);

	//7.
	string str4 = "good bye";
	str3.append(str4, 5, 3);//参数3: 截取字符个数

	cout << str3 << endl;


	int age = 30;
	string name = "lyle";
	double height = 173;
	string msg = name + " is " + to_string(age) + ", " + to_string(height) + "cm";
}

#endif // STRING_CONCAT