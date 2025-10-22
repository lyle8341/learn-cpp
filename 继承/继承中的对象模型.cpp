#include "starter.h"

#ifdef EXTEND_OBJ_MODEL

class Base {
public:
	int a;
protected:
	int b;
private:
	int c;
};


//TODO 父类中所有非静态成员属性都会被子类继承下去
//TODO 父类中私有成员属性，是被编译器给隐藏了
class Son : public Base {
public:
	int d;
};

//TODO 利用开发人员命令提示符工具查看对象模型局命令:
//TODO cl /d1 reportSingleClassLayout类名 类所在的cpp文件 ----> cl /d1 reportSingleClassLayoutSon 继承中的对象模型.cpp
//TODO cl /d1 reportSingleClassLayout类名 类所在的cpp文件 ----> cl /d1 reportSingleClassLayoutSon 继承中的对象模型.cpp
//TODO cl /d1 reportSingleClassLayout类名 类所在的cpp文件 ----> cl /d1 reportSingleClassLayoutSon 继承中的对象模型.cpp
int main() {
	cout << "size of Son = " << sizeof(Son) << endl;
	return 0;
}

#endif // EXTEND_OBJ_MODEL