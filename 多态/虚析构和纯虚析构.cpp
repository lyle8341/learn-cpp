#include "starter.h"


#ifdef VIRTUAL_DESTRUCTOR_PURE_VIRTUAL_DESTRUCTOR

//多态使用时，如果子类中有属性开辟到堆区，那么父类指针在释放时无法调用到子类的析构代码
//解决方式： 将父类中的析构函数改为虚析构或者纯虚析构

// 有纯虚析构的类，也属于抽象类，无法实例化

class Animal {
public:

    Animal() {
        cout << "Animal默认构造函数调用了" << endl;
    }

    //虚析构
    /*virtual ~Animal() {
        cout << "Animal虚析构函数调用了" << endl;
    }*/

    //纯虚析构
    virtual ~Animal() = 0;

    //纯虚函数
    virtual void speak() = 0;
};

//TODO 虚析构和纯虚析构必须有具体函数实现，因为如果父类有堆区属性的话就要用到
Animal::~Animal() {
    cout << "Animal纯虚析构函数调用了" << endl;
}


class Cat :public Animal {
public:
    Cat(string name) {
        cout << "Cat有参构造调用了" << endl;
        this->name = new string(name);
    }

    virtual void speak() {
        cout << *name << ":小猫在说话" << endl;
    }


    ~Cat() {
        if (name != NULL) {
            cout << "Cat析构函数调用了" << endl;
            delete name;
            name = NULL;
        }
    }

    string* name;
};


int main() {
    Animal* animal = new Cat("Tom");
    animal->speak();
    //TODO 父类指针在析构时，不会调用子类中的析构函数，导致子类堆区属性出现内存泄漏
    //TODO 解决方式： 将父类中的析构函数改为虚析构或者纯虚析构
    delete animal;
    return 0;
}

#endif // VIRTUAL_DESTRUCTOR_PURE_VIRTUAL_DESTRUCTOR
