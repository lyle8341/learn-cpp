#pragma once

#include "starter.h"

template<class T>
class MyArray {
public:
	MyArray(int capacity) {
		this->capacity = capacity;
		this->size = 0;
		this->addr = new T[this->capacity];
		//cout << "--- MyArray �вι��캯�� ---" << endl;
	}
	//
	MyArray(const MyArray& arr) {
		this->capacity = arr.capacity;
		this->size = arr.size;
		//���
		this->addr = new T[arr.capacity];
		//���arr������������Ҫ��������������
		for (int i = 0; i < arr.size; i++)
		{
			this->addr[i] = arr.addr[i];
		}
		//cout << "--- MyArray �������캯�� ---" << endl;
	}

	MyArray& operator=(const MyArray& ma) {
		//���ж�ԭ�������Ƿ�������
		if (this->addr != NULL) {
			delete[] this->addr;
			this->addr = NULL;
		}
		this->capacity = ma.capacity;
		this->size = ma.size;
		//���
		this->addr = new T[ma.capacity];
		for (int i = 0; i < ma.size; i++)
		{
			this->addr[i] = ma.addr[i];
		}
		//cout << "--- MyArray =���� ---" << endl;
		return *this;
	}

	~MyArray() {
		if (this->addr != NULL) {
			delete[] this->addr;
			this->addr = NULL;
		}
		//cout << "--- MyArray �������� ---" << endl;
	}


	//β�巨
	void tailInsert(const T& element) {
		//�ж�����
		if (this->capacity == this->size) {
			return;
		}
		this->addr[this->size] = element;//β��
		this->size++;//���������С
	}

	//βɾ
	void tailDelete() {
		if (this->size == 0) {
			return;
		}
		this->size--;
	}

	//ͨ���±귽ʽ����Ԫ��
	T& operator[](int index) {
		return	this->addr[index];
	}

	//��������
	int getCapacity() {
		return this->capacity;
	}

	//���������С
	int getSize() {
		return this->size;
	}

private:
	T* addr; //ָ��������ٵ���ʵ����
	int capacity;
	int size;
};