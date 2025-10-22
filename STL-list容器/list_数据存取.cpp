#include "starter.h"


#ifdef LIST_SAVE_GET

int main() {
	list<int> L1;
	L1.push_back(1);
	L1.push_back(2);
	L1.push_back(3);
	L1.push_back(4);

	cout << "第一个元素:" << L1.front() << endl;
	cout << "最后一个:" << L1.back() << endl;

	//TODO 不支持随机访问(it = it + 1)，只能 ++, 或 --


}
#endif // LIST_SAVE_GET
