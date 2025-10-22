#include "starter.h"


#ifdef POLYMORPHISM_CONCEPT

//多态分为两类
	//静态多态：函数重载和运算符重载属于静态多态，复用函数名
	//动态多态：派生类和虚函数实现运行时多态

//静态多态和动态多态区别：
	//静态多态的函数地址早绑定 - 编译阶段确定函数地址
	//动态多态的函数地址晚绑定 - 运行阶段确定函数地址

class Animal {
public:
	//virtual关键字 使函数地址晚绑定
	virtual void speak() {
		cout << "动物在说话" << endl;
	}
};


class Cat :public Animal {

public:
	void speak() {
		cout << "小猫在说话" << endl;
	}

};


class Dog :public Animal {
public:
	void speak() {
		cout << "小狗在说话" << endl;
	}
};


//如果想执行猫说话，那么这个函数地址就不能提前绑定，需要晚绑定
void doSpeak(Animal& animal) {
	animal.speak();
}


//TODO 动态多态满足条件
	//1. 有继承关系
	//2. 子类重写父类的 "虚函数"（子类中重写函数前面virtual可有可无）
//TODO 动态多态的使用
	//1. 父类的指针或引用 指向子类对象

int main() {
	Cat cat;
	doSpeak(cat);

	Dog dog;
	doSpeak(dog);
	return 0;
}

#endif // POLYMORPHISM_CONCEPT
