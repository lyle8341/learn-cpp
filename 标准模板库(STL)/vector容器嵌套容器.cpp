#include "starter.h"
#include "lyleRandom.h"

#ifdef VECTOR_NESTED_VECTOR

void test01() {
    vector<vector<int>> v;
    //小容器
    vector<int> sv1;
    vector<int> sv2;
    vector<int> sv3;
    vector<int> sv4;

    sv1.push_back(lyle_generateRandom());
    sv1.push_back(lyle_generateRandom());
    sv1.push_back(lyle_generateRandom());
    sv1.push_back(lyle_generateRandom());

    sv2.push_back(lyle_generateRandom());
    sv2.push_back(lyle_generateRandom());
    sv2.push_back(lyle_generateRandom());
    sv2.push_back(lyle_generateRandom());

    sv3.push_back(lyle_generateRandom());
    sv3.push_back(lyle_generateRandom());
    sv3.push_back(lyle_generateRandom());
    sv3.push_back(lyle_generateRandom());

    sv4.push_back(lyle_generateRandom());
    sv4.push_back(lyle_generateRandom());
    sv4.push_back(lyle_generateRandom());
    sv4.push_back(lyle_generateRandom());
    //
    v.push_back(sv1);
    v.push_back(sv2);
    v.push_back(sv3);
    v.push_back(sv4);

    for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
    {
        for (vector<int>::iterator ele = (*it).begin(); ele != (*it).end(); ele++)
        {
            cout << *ele << "\t";
        }
        cout << endl;
    }
}

int main() {
    lyle_initRandom();
    test01();
    return 0;
}
#endif // VECTOR_NESTED_VECTOR