#include <iostream>
#include "starter.h"

using namespace std;

#ifdef STRUCT_CLASS_DIFF

class C1 {
	int age; // 默认私有权限
};

struct S1 {
	int age; // 默认公共权限
};


int main() {
	C1 c;
	S1 s;
	s.age = 3;
	//c.age = 3; //报错

	return 0;
}


#endif // STRUCT_CLASS_DIFF
