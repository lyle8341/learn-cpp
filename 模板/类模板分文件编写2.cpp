#include "person.hpp"


#ifdef CLASS_TEMPLATE_SPLIT_MULTIL_FILE_2

//TODO ���ļ����ļ���д

	// ��.h��.cpp�е�����д��һ�𣬽���׺����Ϊ.hpp�ļ���Լ���׳���ģ�壩


int main() {
	Person<string, int> p("lyle", 30);
	p.showPerson();
	cout << "��ģ����ļ���д2.cpp" << endl;
	return 0;
}

#endif // CLASS_TEMPLATE_SPLIT_MULTIL_FILE_2