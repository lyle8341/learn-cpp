#include "starter.h"



#ifdef LIST_CONSTRUCT



int main() {
	list<int> L1; // Ĭ�Ϲ���
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	printList(L1);

	//���乹��
	list<int> L2(L1.begin(), L1.end());
	printList(L2);

	//��������
	list<int> L3(L2);
	printList(L3);

	list<int> L4(10, 2);
	printList(L4);
	return 0;
}



#endif // LIST_CONSTRUCT

