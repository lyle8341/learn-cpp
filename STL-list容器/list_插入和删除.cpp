#include "starter.h"


#ifdef LIST_INSERT_DELETE

int main() {
	list<int> L1;
	L1.push_back(1);
	L1.push_back(2);
	L1.push_back(3);
	L1.push_back(4);
	L1.push_back(4);
	L1.push_back(4);
	L1.push_back(4);
	printList(L1);

	list<int>::iterator it = L1.begin();
	it++;
	list<int>::iterator nit = L1.insert(it, 8);
	cout << *nit << endl;

	printList(L1);
	//TODO 删除容器中所有与ele值匹配的元素
	L1.remove(4);
	printList(L1);


	return 0;
}

#endif // LIST_INSERT_DELETE
