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

	Person p1("���", 600);
	Person p2("����", 300);
	Person p3("��", 250);
	Person p4("��ɮ", 30);
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);

	while (!q.empty())
	{
		cout << "��ͷԪ��" << q.front().name << " " << q.front().age << endl;
		cout << "��βԪ��" << q.back().name << " " << q.back().age << endl;
		cout << endl;
		//����
		q.pop();
	}

	return 0;
}