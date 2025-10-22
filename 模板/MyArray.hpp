#pragma once

#include "starter.h"

template<class T>
class MyArray {
public:
    MyArray(int capacity) {
        this->capacity = capacity;
        this->size = 0;
        this->addr = new T[this->capacity];
        //cout << "--- MyArray 有参构造函数 ---" << endl;
    }
    //
    MyArray(const MyArray& arr) {
        this->capacity = arr.capacity;
        this->size = arr.size;
        //深拷贝
        this->addr = new T[arr.capacity];
        //如果arr数组有数据需要拷贝到新数组中
        for (int i = 0; i < arr.size; i++)
        {
            this->addr[i] = arr.addr[i];
        }
        //cout << "--- MyArray 拷贝构造函数 ---" << endl;
    }

    MyArray& operator=(const MyArray& ma) {
        //先判断原来堆区是否有数据
        if (this->addr != NULL) {
            delete[] this->addr;
            this->addr = NULL;
        }
        this->capacity = ma.capacity;
        this->size = ma.size;
        //深拷贝
        this->addr = new T[ma.capacity];
        for (int i = 0; i < ma.size; i++)
        {
            this->addr[i] = ma.addr[i];
        }
        //cout << "--- MyArray =重载 ---" << endl;
        return *this;
    }

    ~MyArray() {
        if (this->addr != NULL) {
            delete[] this->addr;
            this->addr = NULL;
        }
        //cout << "--- MyArray 析构函数 ---" << endl;
    }


    //尾插法
    void tailInsert(const T& element) {
        //判断容量
        if (this->capacity == this->size) {
            return;
        }
        this->addr[this->size] = element;//尾插
        this->size++;//更新数组大小
    }

    //尾删
    void tailDelete() {
        if (this->size == 0) {
            return;
        }
        this->size--;
    }

    //通过下标方式访问元素
    T& operator[](int index) {
        return	this->addr[index];
    }

    //返回容量
    int getCapacity() {
        return this->capacity;
    }

    //返回数组大小
    int getSize() {
        return this->size;
    }

private:
    T* addr; //指向堆区开辟的真实数组
    int capacity;
    int size;
};