#include "starter.h"



#ifdef COLLECT_ALGORITHM

void myprint(int var) {
	cout << var << " ";
}

//TODO �������ϱ�������������
void test_intersection(const vector<int>& v1, const vector<int>& v2) {
	vector<int> v3;
	v3.resize(min(v1.size(), v2.size()));
	//TODO ����
	//TODO  ������Sort both vectors before using set_intersection
	vector<int>::iterator itEnd = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());

	//TODO end��ʹ��v3.end()���õ�itEnd����Ϊ���������ܿ���С��v3��size������������0
	for_each(v3.begin(), itEnd, myprint); //ע�� end
}

//TODO �������ϱ�������������
void test_union(const vector<int>& v1, const vector<int>& v2) {
	vector<int> v3;
	v3.resize(v1.size() + v2.size());
	vector<int>::iterator itEnd = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
	for_each(v3.begin(), itEnd, myprint);
}

//TODO �������ϱ�����������
void test_diff(const vector<int>& v1, const vector<int>& v2) {
	vector<int> v3;
	v3.resize(max(v1.size(), v2.size()));

	vector<int>::iterator itEnd = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
	for_each(v3.begin(), itEnd, myprint);
}

int main() {
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(40);
	v1.push_back(50);

	vector<int> v2;
	v2.push_back(20);
	v2.push_back(50);
	v2.push_back(60);
	v2.push_back(100);

	test_intersection(v1, v2);
	cout << endl;
	test_union(v1, v2);
	cout << endl;
	test_diff(v1, v2);
	return 0;
}

#endif // #define COLLECT_ALGORITHM