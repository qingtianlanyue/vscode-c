#include <iostream>
using namespace std;

int main()
{
    int my_array[5]={1,2,3,4,5};

    for (int &x : my_array) // 会改变 my_array 数组中元素的值
                            // 符号 & 表示 x 是一个引用变量，将使用 my_array 数组的原始数据
                            // 引用是已定义的变量的别名
    {
        x*=2;
        cout << x << endl;
    }
    for (auto x : my_array) // 不会改变 my_array 数组中元素的值
                            // x 将使用 my_array 数组的副本
    {
        x*=2;
        cout << x << endl;
    }
    // 还可直接使用初始化列表
    for (int x : {1, 2, 3, 4, 5})
    {
        x *= 2;
        cout << x << endl;
    }
    return 0;
}