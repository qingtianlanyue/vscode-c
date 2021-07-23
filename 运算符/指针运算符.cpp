#include <iostream>
using namespace std;

int main()
{
    int var;
    int *ptr;
    int val;

    var = 3000;
    ptr = &var; //获取var的地址，取地址运算符
    val = *ptr; //获取ptr的值，间接寻址运算符

    cout << "Value of var :" << var << endl;
    cout << "Value of ptr :" << ptr << endl;
    cout << "Value of val :" << val << endl;

    return 0;
}