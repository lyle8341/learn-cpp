#include "starter.h"


#ifdef DEFINE_STRUCT

// c++��struct��classΨһ����������� "Ĭ�ϵķ���Ȩ�޲�ͬ", structĬ��Ȩ��Ϊ����


/*
����ṹ���﷨
struct �ṹ����
{
	�ṹ���Ա
};

ͨ���ṹ�崴��������
�� struct �ṹ���� ������
�� struct �ṹ���� ������ = {��Ա1ֵ, ��Ա2ֵ...}
�� ����ṹ��ʱ˳�㴴������
*/

//�ṹ�嶨��
struct Student {
	string name;
	int age;
	float score;
} s3;

int main() {
	//��ʽһ
	struct Student s1;
	s1.name = "lyle";
	s1.age = 18;
	s1.score = 99.3f;
	cout << "����:" << s1.name << " ����: " << s1.age << " ����: " << s1.score << endl;

	//��ʽ��
	struct Student s2 = { "trump", 23, 87.5f };
	cout << "����:" << s2.name << " ����: " << s2.age << " ����: " << s2.score << endl;

	//��ʽ��������ṹ��ʱ˳�㴴���ṹ�������
	s3.name = "john";
	s3.age = 45;
	s3.score = 56.9f;
	cout << "����:" << s3.name << " ����: " << s3.age << " ����: " << s3.score << endl;

	//�����ṹ�����ʱ������ʡ��struct�ؼ���
	Student s4;

	return 0;
}

#endif // DEFINE_STRUCT
