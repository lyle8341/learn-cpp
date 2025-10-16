#include "starter.h"


#ifdef PURE_VIRTUAL_FUNCTION_ABSTRACT

//纯虚函数语法:  virtual 返回值类型 函数名 (参数列表) = 0;

//当类中有了纯虚函数，这个类也称为 抽象类

//抽象类特点
	//1.无法实例化对象
	//2.子类必须重写抽象类中的纯虚函数，否则也属于抽象类

class Base {
public:
	//纯虚函数
	//只要有一个纯虚函数，这个类称为抽象类
	virtual void func() = 0;
};

class Son :public Base {

	//子类必须实现，否则无法实例化
	virtual void func() {

	}
};



int main() {

	Son s;
	return 0;
}

#endif // PURE_VIRTUAL_FUNCTION_ABSTRACT
