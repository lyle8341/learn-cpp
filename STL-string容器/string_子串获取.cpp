#include "starter.h"

#ifdef STRING_SUBSTRING

int main() {
	string str = "today is Thursday";
	//��ʼλ��, ��ȡ����
	string sub = str.substr(1, 4);

	cout << sub << endl;

	return 0;
}
#endif // STRING_SUBSTRING