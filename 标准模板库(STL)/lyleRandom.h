#pragma once

#include <ctime>
#include <cstdlib>  // 添加这个头文件

//添加随机数种子

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