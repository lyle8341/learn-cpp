#include "starter.h"


#ifdef STRING_TYPE_2

int main() {

	//字面量
	"hello";
	char s[] = "hello";

	//TODO 上述两种方式（本质都是字符数组）均表现为：
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