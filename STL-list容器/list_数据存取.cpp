#include "starter.h"


#ifdef LIST_SAVE_GET

int main() {
	list<int> L1;
	L1.push_back(1);
	L1.push_back(2);
	L1.push_back(3);
	L1.push_back(4);

	cout << "��һ��Ԫ��:" << L1.front() << endl;
	cout << "���һ��:" << L1.back() << endl;

	//TODO ��֧���������(it = it + 1)��ֻ�� ++, �� --


}
#endif // LIST_SAVE_GET
