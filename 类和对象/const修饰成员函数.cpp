#include "starter.h"

#ifdef CONST_CLASS_METHOD

//TODO 常函数
//成员函数加 const 后我们称这个函数为 "常函数"
//常函数内不可用修改成员属性
//成员属性声明时加关键字 mutable 后，在常函数中依然可以修改

//常对象
//声明对象前加 const 称该对象为 "常对象"
//常对象只能调用常函数


class Person {

public:

    //this指针的本质：指针常量，指针指向不能改变
    //等价于 Person* const this;
    void showPerson() {
        //age = 100; 等价于 this->age = 100;
        this->age = 100;
        //this = NULL;//报错，this指向不允许改变
    }

    //常函数
    //等价于 const Person* const this;
    void getPerson() const {
        //this->age = 90;//报错，指向的值也不允许改变
        this->height = 90;
        height = 89;
    }

    int age;
    mutable int height;
};

void test01() {
    //常对象
    const Person p;
    //p.age = 12; //不允许修改
    p.height = 33;

    p.getPerson();//常对象只能调用常函数，因为常对象不允许修改属性，但是普通成员函数中可以修改属性

}

int main() {
    test01();
    return 0;
}

#endif // CONST_CLASS_METHOD

