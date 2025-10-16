#include "starter.h"


#ifdef STRING_FIND_REPLACE

void strFind() {
	string str1 = "abcdefg";
	int idx = str1.find("de");//从左往右查找
	str1.rfind("de");//从右往左查找

	if (-1 == idx) {//TODO 未找到
		cout << "未找到" << endl;
	}
	else {
		cout << idx << endl;
	}

}

void strReplace() {
	string str1 = "abcdefg";
	//从1号位置起 3个字符 替换为 XXXXXX
	str1.replace(1, 3, "XXXXXX");
	cout << str1 << endl;

}

int main() {
	strFind();
	strReplace();
	return 0;
}

#endif // STRING_FIND_REPLACE
