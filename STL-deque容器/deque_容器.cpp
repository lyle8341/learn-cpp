#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

//const 修饰，不允许改变内部元素
void printDeque(const deque<int>& dq) {
    for (deque<int>::const_iterator it = dq.begin(); it != dq.end(); it++)
    {
        //*it = 99; 容器中的数据不可用修改了
        cout << *it << " ";
    }
    cout << endl;
}

// TODO 构造函数
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

//TODO 赋值
void test_assign() {
    deque<int> dq;
    for (int i = 0; i < 10; i++)
    {
        dq.push_back(i);
    }
    printDeque(dq);

    deque<int> d1;
    d1 = dq; // =赋值
    printDeque(d1);

    deque<int> d2;
    d2.assign(dq.begin(), dq.end());
    printDeque(d2);

    deque<int> d3;
    d3.assign(10, 200);
    printDeque(d3);
}

//TODO 大小操作
void op_size() {
    deque<int> dq;
    for (int i = 0; i < 10; i++)
    {
        dq.push_back(i);
    }
    if (!dq.empty()) {
        cout << "大小: " << dq.size() << endl;
    }
    dq.resize(15, -1);
    printDeque(dq);
    dq.resize(3);
    printDeque(dq);
}

void insert_delete() {
    deque<int> dq;
    //尾插
    dq.push_back(10);
    dq.push_back(20);
    //头插
    dq.push_front(-10);
    dq.push_front(-20);
    printDeque(dq);
    //尾删
    dq.pop_back();
    //头删
    dq.pop_front();
    printDeque(dq);

    //insert插入
    dq.insert(dq.begin(), -30);
    printDeque(dq);

    dq.insert(dq.begin(), 3, -40);
    printDeque(dq);

    //删除
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
        // [] 方式
        cout << "[]: " << dq[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < dq.size(); i++)
    {
        // at 方式
        cout << "at: " << dq.at(i) << " ";
    }
    cout << endl;
    cout << "第一个元素:" << dq.front() << endl;
    cout << "最后一个:" << dq.back() << endl;
}

void deque_sort() {
    deque<int> dq;
    dq.push_back(56);
    dq.push_back(12);
    dq.push_back(21);
    dq.push_back(89);
    dq.push_back(3);
    //默认升序
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