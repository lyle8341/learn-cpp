#include <iostream>
#include "starter.h"

using namespace std;


#ifdef STRING_TYPE
int main() {
	//C ����ַ��� char ������[] = "�ַ���ֵ";
	char name[] = "lyle";
	cout << name << endl;
	cout << sizeof(name) << endl;// 4���ַ�+1������ֹ��


	//C++ ����ַ��� string ������ = "�ַ���ֵ";
	string motto = "just do it";
	cout << motto << endl;
	cout << sizeof(motto) << endl; //string�������Ĵ�С
	cout << motto.size() << endl;
	cout << motto.length() << endl;
	return 0;
}
#endif // STRING_TYPE
