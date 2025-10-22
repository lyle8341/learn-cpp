#include <iostream>
#include <queue>

using namespace std;


class Person {
public:
    string name;
    int age;
    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }
};


int main() {
    queue<Person> q;

    Person p1("悟空", 600);
    Person p2("悟能", 300);
    Person p3("悟静", 250);
    Person p4("唐僧", 30);
    q.push(p1);
    q.push(p2);
    q.push(p3);
    q.push(p4);

    while (!q.empty())
    {
        cout << "队头元素" << q.front().name << " " << q.front().age << endl;
        cout << "队尾元素" << q.back().name << " " << q.back().age << endl;
        cout << endl;
        //出队
        q.pop();
    }

    return 0;
}