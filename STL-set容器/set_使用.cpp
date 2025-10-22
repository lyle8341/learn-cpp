#include <iostream>
#include <set>
using namespace std;

void printSet(const set<int>& s) {
    for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void printMultiSet(const multiset<int>& ms) {
    for (set<int>::const_iterator it = ms.begin(); it != ms.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test_construct_assign() {
    set<int> s;//底层是二叉树

    //插入数据，只有insert
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(10);
    s.insert(40);
    s.insert(40);

    //TODO 自动排序、不重复
    printSet(s);

    set<int> s2(s);
    printSet(s2);

    set<int> s3;
    s3 = s;
    printSet(s3);
}

void insert_delete() {
    set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(10);
    s.insert(40);
    printSet(s);

    s.erase(s.begin());
    printSet(s);

    s.erase(40);
    printSet(s);

    //清空
    s.clear();
}


//TODO set没有resize，因为resize后，需要填充，但是又不能重复

void find_cout() {
    set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(10);
    s.insert(40);

    set<int>::iterator pos = s.find(10);
    if (pos != s.end()) {
        cout << "找到元素: " << *pos << endl;
    }
    cout << "共有: " << s.count(20) << "个" << endl;

}

void multiset_diff_set() {
    set<int> s;
    pair<set<int>::iterator, bool> result = s.insert(10);
    if (result.second) {
        cout << "插入成功" << endl;
    }
    else {
        cout << "插入失败" << endl;
    }
    result = s.insert(10);
    if (result.second) {
        cout << "插入成功" << endl;
    }
    else {
        cout << "插入失败" << endl;
    }

    multiset<int> ms;
    ms.insert(20);
    ms.insert(20);
    ms.insert(20);
    ms.insert(20);
    printMultiSet(ms);
}

//对组使用
void pair_use() {

    //TODO 方式一
    pair<string, int> p("Tom", 1);
    cout << "first:" << p.first << " second: " << p.second << endl;

    //TODO 方式二
    pair<string, int> p2 = make_pair("Jerry", 2);
    cout << "first:" << p2.first << " second: " << p2.second << endl;
}





//利用仿函数自定义排序
class MyCompare {
public:
    bool operator()(int a, int b) const {//此处必须有const
        return a > b;
    }

};

void set_sort() {
    set<int, MyCompare> s;
    s.insert(10);
    s.insert(40);
    s.insert(20);
    s.insert(50);

    for (set<int, MyCompare>::iterator it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;




}

int main() {
    //test_construct_assign();
    //insert_delete();
    //find_cout();
    //multiset_diff_set();
    //pair_use();

    set_sort();




    return 0;
}