#include "starter.h"


#ifdef STRING_TYPE_2

int main() {

	//������
	"hello";
	char s[] = "hello";

	//TODO �������ַ�ʽ�����ʶ����ַ����飩������Ϊ��
	char d[] = { 'h','e','l','l','o','\0' };

	cout << "sizeof(s): " << sizeof(s) << endl;
	cout << "sizeof(\"hello\"): " << sizeof("hello") << endl;

	cout << s << "]" << endl;

	for (char t : s)
	{
		cout << t;
	}
	cout << "]" << endl;


	return 0;
}

#endif // STRING_TYPE_2