#include "starter.h"
#include <vector>
#include "../��׼ģ���(STL)/lyleRandom.h"

//�ڽ��º�����Ҫ����
#include <functional>
//�㷨
#include <algorithm>

#ifdef INTERNAL_FUNCTION_OBJ

void �����º���() {
	//ȡ��
	negate<int> n;
	cout << n(50) << endl;

	plus<int> p;
	cout << p(10, 20) << endl;

	//plus
	//minus
	//multiplies
	//divides
	//modulus
}

void ��ϵ�º���() {
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(lyle_generateRandom());
	}
	printVector(v);
	sort(v.begin(), v.end(), greater<int>());
	printVector(v);
	//equal_to
	//not_equal
	//greater_equal
	//less
	//less_equal
}

void �߼��º���() {
	vector<bool> v;
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	v.push_back(false);
	printVector(v);

	vector<bool> v2;
	v2.resize(v.size());//TODO ������!!!

	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());
	printVector(v2);
}

int main() {
	lyle_initRandom();
	//�����º���();
	//��ϵ�º���();
	�߼��º���();
	return 0;
}
#endif // INTERNAL_FUNCTION_OBJ
