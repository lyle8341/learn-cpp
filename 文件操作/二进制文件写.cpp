#include "starter.h"



#ifdef BINARY_WRITE

//TODO 函数原型:  ostream& write(const char* buffer, int len);

class Person {
public:
	char name[64];
	int age;

};

void test() {
	Person p = { "lyle", 20 };

	//1.创建流对象
	ofstream ofs("person.bin", ios::out | ios::binary);

	//ofs.open("person.bin", ios::out | ios::binary);

	ofs.write((const char*)&p, sizeof(Person));

	ofs.close();
}

int main() {
	test();

	return 0;
}
#endif // BINARY_WRITE
