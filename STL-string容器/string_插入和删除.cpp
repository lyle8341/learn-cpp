#include "starter.h"


#ifdef STRING_INSERT_DELETE
int main() {
	string str = "hello";
	str.insert(1, "***");// h***ello

	cout << str << endl;

	//起始位置, 删除个数
	str.erase(1, 3);
	cout << str << endl;

	return 0;
}
#endif // STRING_INSERT_DELETE