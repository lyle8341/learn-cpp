#include <iostream>
#include "starter.h"

using namespace std;

#ifdef STRUCT_CLASS_DIFF

class C1 {
	int age; // Ĭ��˽��Ȩ��
};

struct S1 {
	int age; // Ĭ�Ϲ���Ȩ��
};


int main() {
	C1 c;
	S1 s;
	s.age = 3;
	//c.age = 3; //����

	return 0;
}


#endif // STRUCT_CLASS_DIFF
