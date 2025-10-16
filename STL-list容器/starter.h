#pragma once

#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

//#define LIST_CONSTRUCT



inline void printList(const list<int>& L) {
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}



//#define ASSIGN_SWAP

//#define LIST_INSERT_DELETE

//#define LIST_SAVE_GET

#define LIST_REVERSE_SORT
