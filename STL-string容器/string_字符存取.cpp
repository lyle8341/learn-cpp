#include "starter.h"


#ifdef CHAR_STORAGE_FETCH

int main() {
	string str = "hello";

	//1.ͨ��[]
	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i] << "\t";
	}
	cout << endl;

	//2.ͨ��at
	for (int i = 0; i < str.size(); i++)
	{
		cout << str.at(i) << "\t";
	}
	cout << endl;

	//[] �޸�
	str[0] = 'x';

	//at �޸�
	str.at(1) = 'y';

	cout << str << endl;

	return 0;
}


#endif // CHAR_STORAGE_FETCH
