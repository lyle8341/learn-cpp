#include "starter.h"
#include "../��׼ģ���(STL)/lyleRandom.h"

#ifdef VECTOR_SAVE_GET

int main() {

	lyle_initRandom();

	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(lyle_generateRandom());
	}
	//����[]����������Ԫ��
	for (int i = 0;i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	//����at��ʽ����Ԫ��
	for (int i = 0; i < v.size(); i++)
	{
		cout << v.at(i) << " ";
	}
	cout << endl;

	cout << "��һ��Ԫ��: " <<v.front() << endl;
	cout << "���һ��Ԫ��: " <<v.back() << endl;

	return 0;
}
#endif // VECTOR_SAVE_GET