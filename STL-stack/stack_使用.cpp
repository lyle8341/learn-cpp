#include <iostream>
#include <stack>

using namespace std;

void test01() {
	stack<int> s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	cout << "ջ�Ĵ�С: " << s.size() << endl;
	while (!s.empty())
	{
		//�鿴ջ��Ԫ��
		cout << "ջ��Ԫ��: " << s.top() << endl;
		//��ջ
		s.pop();
	}
	cout << "ջ�Ĵ�С: " << s.size() << endl;
}

int main() {
	test01();
	return 0;
}