#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

//const ���Σ�������ı��ڲ�Ԫ��
void printDeque(const deque<int>& dq) {
	for (deque<int>::const_iterator it = dq.begin(); it != dq.end(); it++)
	{
		//*it = 99; �����е����ݲ������޸���
		cout << *it << " ";
	}
	cout << endl;
}

// TODO ���캯��
void test_construct() {
	deque<int> dq;
	for (int i = 0; i < 10; i++)
	{
		dq.push_back(i);
	}
	printDeque(dq);

	deque<int> d2(dq.begin(), dq.end());
	printDeque(d2);

	deque<int> d3(10, 99);
	printDeque(d3);

	deque<int> d4(d3);
	printDeque(d4);
}

//TODO ��ֵ
void test_assign() {
	deque<int> dq;
	for (int i = 0; i < 10; i++)
	{
		dq.push_back(i);
	}
	printDeque(dq);

	deque<int> d1;
	d1 = dq; // =��ֵ
	printDeque(d1);

	deque<int> d2;
	d2.assign(dq.begin(), dq.end());
	printDeque(d2);

	deque<int> d3;
	d3.assign(10, 200);
	printDeque(d3);
}

//TODO ��С����
void op_size() {
	deque<int> dq;
	for (int i = 0; i < 10; i++)
	{
		dq.push_back(i);
	}
	if (!dq.empty()) {
		cout << "��С: " << dq.size() << endl;
	}
	dq.resize(15, -1);
	printDeque(dq);
	dq.resize(3);
	printDeque(dq);
}

void insert_delete() {
	deque<int> dq;
	//β��
	dq.push_back(10);
	dq.push_back(20);
	//ͷ��
	dq.push_front(-10);
	dq.push_front(-20);
	printDeque(dq);
	//βɾ
	dq.pop_back();
	//ͷɾ
	dq.pop_front();
	printDeque(dq);

	//insert����
	dq.insert(dq.begin(), -30);
	printDeque(dq);

	dq.insert(dq.begin(), 3, -40);
	printDeque(dq);

	//ɾ��
	deque<int>::iterator it = dq.begin();
	it++;
	dq.erase(it);
	printDeque(dq);

	//dq.erase(dq.begin(), dq.end());
	dq.clear();
	printDeque(dq);
}

void save_get() {
	deque<int> dq;
	dq.push_back(10);
	dq.push_back(20);
	dq.push_back(30);

	for (int i = 0; i < dq.size(); i++)
	{
		// [] ��ʽ
		cout << "[]: " << dq[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < dq.size(); i++)
	{
		// at ��ʽ
		cout << "at: " << dq.at(i) << " ";
	}
	cout << endl;
	cout << "��һ��Ԫ��:" << dq.front() << endl;
	cout << "���һ��:" << dq.back() << endl;
}

void deque_sort() {
	deque<int> dq;
	dq.push_back(56);
	dq.push_back(12);
	dq.push_back(21);
	dq.push_back(89);
	dq.push_back(3);
	//Ĭ������
	sort(dq.begin(), dq.end());
	printDeque(dq);
}

int main() {
	//test_construct();
	//test_assign();
	//op_size();
	//insert_delete();
	//save_get();
	deque_sort();
	return 0;
}