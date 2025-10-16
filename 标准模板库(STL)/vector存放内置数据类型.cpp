#include "starter.h"


#ifdef VECTOR_INTERNAL_TYPE


void myPrint(int val) {
	cout << val << endl;
}


void test01() {
	vector<int>	 v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);

	//����������
	vector<int>::iterator itBegin = v.begin();//ָ�������е�һ��Ԫ��
	vector<int>::iterator itEnd = v.end();    //ָ�����һ��Ԫ�ص���һ��λ��

	//��һ�ֱ���
	while (itBegin != itEnd)
	{
		cout << *itBegin << endl;
		itBegin++;
	}

	//�ڶ��ֱ���
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;
	}

	//�����ֱ��� ����STL�ṩ�ı����㷨
	for_each(v.begin(), v.end(), myPrint);
}




int main() {
	test01();
	return 0;
}
#endif // VECTOR_INTERNAL_TYPE
