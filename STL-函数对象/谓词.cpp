#include "starter.h"

#include <vector>
#include <algorithm>

#ifdef FUNCTION_OBJ_PREDICATE

//TODO ����bool���͵ķº�����Ϊ "ν��"
//TODO operator ����һ������---> һԪν��
//TODO operator ���ܶ�������---> ��Ԫν��


//һԪν��
struct GreaterFive
{
	bool operator()(int var) {
		return var > 780;
	}
};

void test01() {
	vector<int> v;
	v.push_back(85);
	v.push_back(23);
	v.push_back(45);
	v.push_back(20);
	v.push_back(12);
	v.push_back(785);
	v.push_back(65);
	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());//������������
	if (it != v.end()) {
		//�ҵ���,��������������Ԫ�ص� pos
		cout << "�ҵ���: " << *it << endl;
	}
}


//��Ԫν��
struct MySort
{
	bool operator()(int a, int b) {
		return a > b;
	}
};
void test02() {
	vector<int> v;
	v.push_back(85);
	v.push_back(23);
	v.push_back(45);
	v.push_back(20);
	v.push_back(12);
	v.push_back(785);
	v.push_back(65);

	sort(v.begin(), v.end(), MySort());

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

















int main() {
	test01();
	test02();
	return 0;
}
#endif // FUNCTION_OBJ_PREDICATE
