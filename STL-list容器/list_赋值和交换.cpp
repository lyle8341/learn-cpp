#include "starter.h"


#ifdef ASSIGN_SWAP

int main() {
	list<int> L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	printList(L1);

	list<int> L2;
	L2 = L1;
	printList(L2);

	list<int> L3;
	L3.assign(L1.begin(), L1.end());
	printList(L3);

	list<int> L4;
	L4.assign(10, 4);
	printList(L4);

	L1.swap(L4);
	printList(L1);
	printList(L4);
}


#endif // ASSIGN_SWAP
