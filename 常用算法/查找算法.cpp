#include "starter.h"



#ifdef FIND_ALGORITHM


void test_find() {
	vector<int> v;

	vector<int>::iterator pos = find(v.begin(), v.end(), 5);
	if (pos != v.end()) {
		//�ҵ���
	}
	//TODO �Զ���������Ҫ���� ==
}

void test_find_if() {

	//find_if(iterator beg, iterator end, _Pred)

	//���������ظ�
	//adjacent_find(iterator beg, iterator end)

	//TODO �������в�����
	//bool binary_search(iterator beg, iterator end, value);

	//TODO �Զ��������Ҫ���� ==
	//int count(iterator beg, iterator end, value)
	//count_if(iterator beg, iterator end, _Pred)


}











int main() {
	test_find();

	test_find_if();

	return 0;
}
#endif // FIND_ALGORITHM
