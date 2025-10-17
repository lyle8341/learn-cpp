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
	set<int> s;//�ײ��Ƕ�����

	//�������ݣ�ֻ��insert
	s.insert(10);
	s.insert(20);
	s.insert(30);
	s.insert(10);
	s.insert(40);
	s.insert(40);

	//TODO �Զ����򡢲��ظ�
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

	//���
	s.clear();
}


//TODO setû��resize����Ϊresize����Ҫ��䣬�����ֲ����ظ�

void find_cout() {
	set<int> s;
	s.insert(10);
	s.insert(20);
	s.insert(30);
	s.insert(10);
	s.insert(40);

	set<int>::iterator pos = s.find(10);
	if (pos != s.end()) {
		cout << "�ҵ�Ԫ��: " << *pos << endl;
	}
	cout << "����: " << s.count(20) << "��" << endl;

}

void multiset_diff_set() {
	set<int> s;
	pair<set<int>::iterator, bool> result = s.insert(10);
	if (result.second) {
		cout << "����ɹ�" << endl;
	}
	else {
		cout << "����ʧ��" << endl;
	}
	result = s.insert(10);
	if (result.second) {
		cout << "����ɹ�" << endl;
	}
	else {
		cout << "����ʧ��" << endl;
	}

	multiset<int> ms;
	ms.insert(20);
	ms.insert(20);
	ms.insert(20);
	ms.insert(20);
	printMultiSet(ms);
}

//����ʹ��
void pair_use() {

	//TODO ��ʽһ
	pair<string, int> p("Tom", 1);
	cout << "first:" << p.first << " second: " << p.second << endl;

	//TODO ��ʽ��
	pair<string, int> p2 = make_pair("Jerry", 2);
	cout << "first:" << p2.first << " second: " << p2.second << endl;
}





//���÷º����Զ�������
class MyCompare {
public:
	bool operator()(int a, int b) const {//�˴�������const
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