#include "starter.h"

#ifdef LIST_REVERSE_SORT

bool myCompare(int a, int b) {
	return a > b;
}


int main() {
	list<int> L1;
	L1.push_back(15);
	L1.push_back(2);
	L1.push_back(23);
	L1.push_back(4);
	L1.push_back(55);

	printList(L1);

	//TOOD ��ת
	L1.reverse();
	printList(L1);

	//TODO ���в�֧��������ʵĵ��������������ñ�׼�㷨
	//sort(L1.begin(), L1.end());

	L1.sort();//Ĭ������
	printList(L1);
	//����
	L1.sort(myCompare);
	printList(L1);


	return 0;
}

#endif // LIST_REVERSE_SORT