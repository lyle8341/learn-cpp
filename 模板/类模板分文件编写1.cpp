#include "person.cpp"


#ifdef CLASS_TEMPLATE_SPLIT_MULTIL_FILE_1

//TODO ���ļ����ļ���д
	//1. person.h
	//2. person.cpp
	//3. ��ģ����ļ���д.cpp

int main() {
	Person<string, int> p("lyle", 30);
	cout << "��ģ����ļ���д1.cpp" << endl;
	p.showPerson();
	return 0;
}

#endif // CLASS_TEMPLATE_SPLIT_MULTIL_FILE_1