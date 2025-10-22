#include "starter.h"


#ifdef CHAR_STORAGE_FETCH

int main() {
	string str = "hello";

	//1.通过[]
	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i] << "\t";
	}
	cout << endl;

	//2.通过at
	for (int i = 0; i < str.size(); i++)
	{
		cout << str.at(i) << "\t";
	}
	cout << endl;

	//[] 修改
	str[0] = 'x';

	//at 修改
	str.at(1) = 'y';

	cout << str << endl;

	return 0;
}


#endif // CHAR_STORAGE_FETCH
