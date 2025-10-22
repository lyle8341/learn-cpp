#include "starter.h"


#ifdef TWO_D_ARRAY_NAME

//TODO 关键区别：数组名 ≠ 指针变量（数组名不是变量，是一个右值），会衰变为一个指针常量


int main() {

    //1. 查看占用内存空间大小
    int arr[2][3] =
            {
                    {1,2,3},
                    {6,7,8}
            };
    cout << "二维数组占用内存空间为: " << sizeof(arr) << endl;

    cout << "二维数组第一行占用内存为: " << sizeof(arr[0]) << endl;

    cout << "二维数组第一个元素占用内存为: " << sizeof(arr[0][0]) << endl;


    int rows = sizeof(arr) / sizeof(arr[0]);
    int cols = sizeof(arr[0]) / sizeof(arr[0][0]);

    cout << "二维数组为: " << rows << "行" << cols << "列" << endl;

    //2. 查看二维数组的首地址
    cout << "二维数组首地址为: " << arr << "\t" << (int)arr << endl;
    cout << "二维数组第一行首地址为: " << arr[0] << "\t" << (int)arr[0] << endl;
    cout << "二维数组第一个元素地址为: " << &arr[0][0] << "\t" << (int)&arr[0][0] << endl;
    cout << "二维数组第二行首地址为: " << arr[1] << "\t" << (int)arr[1] << endl;


    return 0;
}
#endif // TWO_D_ARRAY_NAME
