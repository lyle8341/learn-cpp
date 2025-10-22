#include "starter.h"

#ifdef STRING_SUBSTRING

int main() {
	string str = "today is Thursday";
	//起始位置, 截取个数
	string sub = str.substr(1, 4);

	cout << sub << endl;

	return 0;
}
#endif // STRING_SUBSTRING