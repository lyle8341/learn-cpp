#include "starter.h"


#ifdef FUNCTION_TEMPLATE

//�﷨�� template<typename T>
	//template ��������ģ��
	//typename ���������ķ�����һ���������ͣ�������class����
	//T ͨ�õ��������ͣ�ͨ��Ϊ��Щ��ĸ

//����ģ��
template<typename T> //����һ��ģ�壬���߱�������������н����ŵ�T��Ҫ����
void myswap(T& a, T& b) { //ע�⺯���������ó�ͻ!!!
	T temp = a;
	a = b;
	b = temp;
}

int main() {

	int a = 10;
	int b = 20;

	//ʹ�ú���ģ�巽ʽһ(�Զ������Ƶ�)
	myswap(a, b);
	cout << "a = " << a << " b = " << b << endl;

	//ʹ�ú���ģ�巽ʽ��(��ʾָ������)
	myswap<int>(a, b);

	cout << "a = " << a << " b = " << b << endl;

	return 0;
}
#endif // FUNCTION_TEMPLATE