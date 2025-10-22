#include "starter.h"

#ifdef LIST_REVERSE_SORT

bool myCompare(int a, int b) {
    return a > b;
}


int main() {
    list<int> L1;
    L1.push_back(15);
    L1.push_back(2);
    L1.push_back(23);
    L1.push_back(4);
    L1.push_back(55);

    printList(L1);

    //TOOD 反转
    L1.reverse();
    printList(L1);

    //TODO 所有不支持随机访问的迭代器，不可以用标准算法
    //sort(L1.begin(), L1.end());

    L1.sort();//默认升序
    printList(L1);
    //降序
    L1.sort(myCompare);
    printList(L1);


    return 0;
}

#endif // LIST_REVERSE_SORT