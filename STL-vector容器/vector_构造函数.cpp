#include "starter.h"
#include "../��׼ģ���(STL)/lyleRandom.h"


#ifdef VECTOR_CONSTRUCT

//TODO ��̬��չ����ԭ���ݿ������¿ռ䣬�ͷ�ԭ�ռ�


int main() {
	lyle_initRandom();

	vector<int> v1;//TODO Ĭ�Ϲ���
	for (int i =0;i< 10;i++)
	{
		v1.push_back(lyle_generateRandom());
	}
	printVector(v1);

	//TODO ͨ�����乹��
	vector<int> v2(v1.begin(), v1.end());//����: ������
	printVector(v2);

	//TODO n��element��ʽ����
	int count = 8;
	int value = 110;
	vector<int> v3(count, value);
	printVector(v3);

	//TODO ��������
	vector<int> v4(v3);
	printVector(v4);

	return 0;
}

#endif // VECTOR_CONSTRUCT