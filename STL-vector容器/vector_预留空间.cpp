#include "starter.h"

#ifdef VECTOR_RESERVE

int main() {
	//TODO ����vector�ڶ�̬��չ����ʱ����չ����

	//reserve(int len); ����Ԥ��len��Ԫ�س��ȣ�Ԥ��λ�ò���ʼ����Ԫ�ز��ɷ���

	vector<int> v;


	//���� reserve Ԥ���ռ䣬���Լ������ݴ���
	v.reserve(100000);


	int expand_times = 0;//ͳ�ƿ����ڴ����
	int* p = NULL;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);

		if (p != &v[0]) {
			p = &v[0];
			expand_times++;
		}

	}
	cout << "�����ڴ����: " << expand_times << endl;

	return 0;
}

#endif // VECTOR_RESERVE