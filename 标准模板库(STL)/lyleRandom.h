#pragma once

#include <ctime>
#include <cstdlib>  // ������ͷ�ļ�

//������������

inline void lyle_initRandom() {
	srand((unsigned int)time(NULL));
}

inline int lyle_generateRandom() {
	return  rand() % 100 + 1;
}

inline void printVector(vector<int>& v) {
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}