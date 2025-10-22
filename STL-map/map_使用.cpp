#include <iostream>
#include <map>

using namespace std;


void printMap(map<int, int>& m) {
    for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
    {
        //cout << "key:" << (*it).first << " value:" << (*it).second << endl;
        cout << "key:" << it->first << " value:" << it->second << endl;
    }
    cout << endl;
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

void map_construct() {
    map<int, int> m;
    m.insert(pair<int, int>(2, 20)); //匿名对组
    m.insert(pair<int, int>(1, 10)); //匿名对组
    m.insert(make_pair(4, 40));
    m.insert(make_pair(3, 30));
    m.insert(map<int, int>::value_type(6, 60));
    //TODO 不建议插入用，用途：利用key(确定key存在时)访问value
    m[8] = 100;
    cout << m[120] << endl;
    printMap(m);

    //拷贝构造
    map<int, int> m2(m);
    //printMap(m2);

    map<int, int> m3;
    m3 = m2;
    //printMap(m3);

    m.erase(m.begin());//按照key删除
    printMap(m);

    m.erase(60);
    printMap(m);

    m.clear();
}

void find_count() {
    map<int, int> m;
    m.insert(pair<int, int>(2, 20)); //匿名对组
    m.insert(pair<int, int>(1, 10)); //匿名对组
    m.insert(make_pair(4, 40));
    m.insert(make_pair(3, 30));
    m.insert(map<int, int>::value_type(6, 60));

    map<int, int>::iterator pos = m.find(4);

    if (pos != m.end()) {
        cout << "找到了" << endl;
    }
    m.count(2);//统计key=2的个数
}



//TODO 自定义排序

class MyCompare {
public:
    bool operator()(int a, int b) const {
        return a > b;
    }

};

void printMap(map<int, int, MyCompare>& m) {
    for (map<int, int, MyCompare>::iterator it = m.begin(); it != m.end(); it++)
    {
        cout << "key:" << it->first << " value:" << it->second << endl;
    }
    cout << endl;
}


void map_sort() {
    map<int, int, MyCompare> m;
    m.insert(pair<int, int>(2, 20)); //匿名对组
    m.insert(pair<int, int>(1, 10)); //匿名对组
    m.insert(make_pair(4, 40));
    m.insert(make_pair(3, 30));
    m.insert(map<int, int>::value_type(6, 60));
    printMap(m);
}

int main() {
    //map_construct();
    //find_count();
    map_sort();
    return 0;
}